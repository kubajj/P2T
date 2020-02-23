#!/bin/bash

cat help-read.txt | while read line
do
	# Make each line of the file uppercase and print it
	echo $line | tr [:lower:] [:upper:]
done

exit 0
