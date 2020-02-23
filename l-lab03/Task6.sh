#!/bin/bash
for i in *.data
do
  if [ $i = "*.data" ]; then 
	echo "No data files"
	exit 0;
  fi
  echo $i
  if [ ! -e ${i}.bak ]; then
    cp $i  ${i}.bak
    echo "Created file ${i}.bak, because it was missing."
  fi
done
