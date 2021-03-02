#!/bin/bash

# This script finds individual files in the current directory of size 0
# and if confirmed deletes them.

# Loop through the directory
for file in *
do
  # Check if file is empty
  if [ ! -s ${file} ]; then
    # Could use just rm -i ${file} but that is not the point of exercise

    # Ask for confirmation
    echo "Do you want to delete ${file}? [Y/N]"

    # Read in response
    read response

    # Validate response
    if [ ${response} == "Y" ]; then
      # Delete file and inform user
      rm -f ${file}
      echo "${file} deleted."
    fi
  fi
done
# Terminate with success
exit 0
