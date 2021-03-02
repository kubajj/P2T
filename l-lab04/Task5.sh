#!/bin/bash

# Function process decodes a string using base64
process() {
  echo ${1} | base64 -d
}

# Check if at least one argument was supplied
if [ $# -eq 0 ]; then
  echo "No argument was supplied."

  # Terminate with failure
  exit 1
fi

# Loop through arguments to check if all of the files exist
for file in $@
do  
  # Check if the file exists
  if [ ! -f ${file} ]; then
    echo "${file} is not a file"

    # Terminate with failure
    exit 2
  fi
done

# Loop through arguments to decode them
for file in $@
do
  # Call decoder on first and last line
  process $(head -n 1  "${file}")
  process $(tail -n 1  "${file}")
done

# Terminate with success
exit 0
