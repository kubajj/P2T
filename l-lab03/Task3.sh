#!/bin/bash

# For each file in current directory
for file in *
do
  # If the file is a directory, . is not end of branch - print and exit
  if [ -d $file ]; then
    echo "Current directory is not the end of branch."
    exit 0
  fi
done
# None of the files was a directory, print that . is end of branch and exit
echo "Current directory is the end of branch."
exit 0
