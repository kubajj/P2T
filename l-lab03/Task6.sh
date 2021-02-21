#!/bin/bash

# Loop through files ending by .data
for file in *.data
do
  # If backup file is missing, create it
  if [ -e $file ] && [ ! -e "${file}.bak" ]; then
    cp $file ${file}.bak
  fi
done
# Terminate
exit 0
