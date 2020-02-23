#!/bin/bash
B="true"
for file in *
do
  if [ -d $file ]; then
    echo "$file is a directory"
    B="false"
  fi
done
if [ $B = "true" ]; then
  echo "Current directory is the end of a branch."
else
  echo "Current directory is not the end of a branch."
fi
