#!/bin/bash

# If random is an existing file
if [ -e random ]; then
  # Check if it is a directory
  if [ -d random ]; then
    # Remove it
    rm -r random
  else
    # Remove it
    rm random
  fi
fi
# Create an empty file random
touch random
# Loop 100 times
for i in {1..100}
do
  # Store random number in the file
  echo $RANDOM >> random
done
