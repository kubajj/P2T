#!/bin/bash
# for every argument:
for i in $@
do
  # check if the argument is an existing file
  if [ -e $i ]; then
    # if it exists and is a directory, inform user about it
    if [ -d $i ]; then
      echo "$i is a directory"
    else
      # if it exists, but it it not a directory then print that it is a file
      echo "$i is a file"
    fi
  else
    # if it does not exist, print that it does not exist
    echo "$i does not exists"
  fi
done
# if everything goes well exit with 0
exit 0
