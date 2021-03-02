#!/bin/bash

# This script for every file name passed as a parameter, prints
# if it is a file, directory or does not exist

function argsCheck {
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
}

# Test functionality
if [ $# -eq 0 ]; then
  echo "Please provide at least one argument."
else
  argsCheck $@
fi

# Terminate with success
exit 0
