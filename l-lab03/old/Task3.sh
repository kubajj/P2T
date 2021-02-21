#!/bin/bash

# create a flag (boolean)
B="true"
# loop through all the files in the current directory
for file in *
do
  # if there is a file, which is a directory
  if [ -d $file ]; then
    # print that this file is a directory
    echo "$file is a directory"
    # and change the flag to false
    B="false"
  fi
done
# if the flag is still true, there were no directories, so it is end of branch
if [ $B = "true" ]; then
  echo "Current directory is the end of a branch."
else
  echo "Current directory is not the end of a branch."
fi
# if everything goes well exit with 0
exit 0
