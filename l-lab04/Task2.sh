#!/bin/bash

# go through each of the line of the file individually
cat help-read.txt | while read line;
do
	# call wc to count words and redirect the content of line to it as input
	echo "${line}" | wc -w
done
