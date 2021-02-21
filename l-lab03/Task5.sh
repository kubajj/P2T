#!/bin/bash

# Loop through arguments
for file in $@
do
  # If file with name of current argument exists
  if [ -e $file ]; then
    # and is a directory
    if [ -d $file ]; then
      # Print that it is a directory
      echo "${file} is a directory"
    else
      # Print that it is a file
      echo "${file} is a file"
    fi
  else
    # Print that it does not exist
    echo "${file} does not exists"
  fi
done
# Terminate
exit 0
