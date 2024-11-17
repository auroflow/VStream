#!/bin/bash

SCRIPT_DIR=$(dirname -- "${BASH_SOURCE}")
source "$SCRIPT_DIR/set_env.sh"
FLINK_FRONTEND_DIR=/home/auroflow/code/vector-search/VStream/flink-frontend
COMPLETED_LOG="$FLINK_FRONTEND_DIR/params/completed"
QDRANT_ROOT="node182"
SSH_CONFIG="-p 4399"

# Find all params.yaml files in the params directory
for file in $(find "$FLINK_FRONTEND_DIR/params" -name "*.yaml" | sort -n); do
  base=$(basename "$file")
  # For each line in the completed log, check if the file has been processed
  while IFS=" " read -r status filename; do
    if [ "$filename" == "$base" ]; then
      echo "Skipping $status $base"
      continue 2
    fi
  done < "$COMPLETED_LOG"

  # Run the job, and save the syslogs folder name (last 9 characters)
  # if filename contains 'hnswlib', invoke start-hnswlib.sh
  if [[ $file == *"qdrant"* ]]; then
    echo "Running qdrant job: $file"

    # Restart Qdrant cluster
    ssh $SSH_CONFIG $QDRANT_ROOT "cd /home/auroflow/qdrant && ./stop-qdrant-cluster.sh"
    echo "Qdrant cluster stopped."
    ssh $SSH_CONFIG $QDRANT_ROOT "cd /home/auroflow/qdrant && ./purge-qdrant-cluster.sh"
    echo "Qdrant data removed."

    # Change Qdrant parallelism if needed.
    if [[ $file == *"parallelism"* ]]; then
      # parallelism is the after the last hyphenf
      parallelism=$(basename "$file" .yaml | grep -oP '(?<=-)[0-9]+$')
      # Change cpus: 'x' to cpus: '$parallelism' in querynode.yml
      ssh $SSH_CONFIG $QDRANT_ROOT "sed -i 's/cpus: '\''[0-9]*'\''/cpus: '\''$parallelism'\''/g' /home/auroflow/qdrant/qdrant-master.yaml.template"
      ssh $SSH_CONFIG $QDRANT_ROOT "sed -i 's/cpus: '\''[0-9]*'\''/cpus: '\''$parallelism'\''/g' /home/auroflow/qdrant/qdrant-worker.yaml.template"
      echo "Qdrant node cpu changed to $parallelism"
    fi

    ssh $SSH_CONFIG $QDRANT_ROOT "cd /home/auroflow/qdrant && ./run-qdrant-cluster.sh"
    echo "Qdrant cluster started."

    "$SCRIPT_DIR/start-qdrant.sh" -p "$file" -f true
    syslog_dir=$(cat ./.syslog_dir)
    syslog_dirname=$(basename "$syslog_dir")

    PROMPT='rocksdb: Running "'$file'". Syslogs folder: '$syslog_dirname''
    echo "$PROMPT"

    # Dingtalk notification
    curl "$DINGTALK_NOTIFICATION_URL" \
    -H 'Content-Type: application/json' \
    -d "{\"msgtype\": \"text\", \"text\": {\"content\": \"$PROMPT\"}}" &> /dev/null

    sleep 5m

    python3 "$SCRIPT_DIR/wait-flink-job.py" "$syslog_dirname"
    status=$?
    "$SCRIPT_DIR/stop-qdrant.sh" -f "$syslog_dirname" -a y
    rm -f ./.syslog_dir
    if [ $status -ne 0 ]; then
      echo "fail $base" >> "$COMPLETED_LOG"
    else
      echo "done $base" >> "$COMPLETED_LOG"
    fi
  else
    echo "Skip non-qdrant job $base."
    continue
  fi
done