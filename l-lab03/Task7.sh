#!/bin/bash

# Get current timestamp
NAME=$(date +%s)
# Create pseudoboolean
EXIST="false"
# If current timestamp is a directory
if [ -d $NAME ]; then
  # Print it exists
  echo "${NAME} already exists"
  # Terminate with failure
  exit 1
# If timestamp is a file
elif [ -e $NAME ]; then
  # Print that it is already a file
  echo "${NAME} is an existing file"
  # Terminate with failure
  exit 1
fi
# Create a directory with the timestamp name
mkdir $NAME
# Loop 10 times
for i in {1..10}
do
  # Create a file called random<n>.dat
  FILE="${NAME}/random${i}.dat"
  # Loop 50 times
  for j in {1..50}
  do  
    # Add random number to the file
    echo $RANDOM >> $FILE
  done
done
# Terminate
exit 0
