#!/bin/bash

# This script print the word count of each line in help-read.txt

# Filename
FILE="help-read.txt"

# If file does not exist exit with failure
if [ ! -e "${FILE}" ]; then
  echo "${FILE} does not exists."
  exit 1
else
  # For each line in the file
  cat ${FILE} | while read line;
  do
    # Print word count of the line
    echo "${line}" | wc -w
  done
fi

# Terminate with success
exit 0
