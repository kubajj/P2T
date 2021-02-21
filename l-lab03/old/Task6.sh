#!/bin/bash
# loop through all the .data files in the current directory
for i in *.data
do
  # if there is none of them, then exit with error message
  if [ $i = "*.data" ]; then 
	echo "No data files"
	exit 1;
  fi
  # print the name of the file
  echo $i
  # if the appropriate .bak file does not exist, create it by creating a copy of the file
  if [ ! -e ${i}.bak ]; then
    cp $i  ${i}.bak
    # copy file to .bak file and tell user what happened
    echo "Created file ${i}.bak, because it was missing."
  fi
done
# if everything goes well exit with 0
exit 0
