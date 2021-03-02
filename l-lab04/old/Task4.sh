#!/bin/bash
# loop through all of the arguments
for file in $@
do
	# if the current argument is not an existing file, print that it does not exist
	if [ ! -e ${file} ]; then
		echo "${file} does not exits"
	else
		# if it is a directory, print that it is a directory
		if [ -d ${file} ]; then
			echo "${file} is a directory"
		# otherwise, print that it is a file
		else
			echo "${file} is a file"
		fi
	fi
done
# end of the program
