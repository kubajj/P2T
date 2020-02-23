#!/bin/bash
for i in $@
do
  if [ -e $i ]; then
    if [ -d $i ]; then
      echo "$i is a directory"
    else
      echo "$i is a file"
    fi
  else
    echo "$i does not exists"
  fi
done
