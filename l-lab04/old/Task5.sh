#!/bin/bash

#create function process
process() {
	# process has to be called with a name of file as an argument
	# take first line and decode it
	echo | head -n 1 ${1} | base64 -d
	# take last line and decode it
	echo | tail -n 1 ${1} | base64 -d 
}

# check if there are any arguments and exit with 1 if not
if [ $# == 0 ]; then
	echo "No arguments were given"
	exit 1
else
	# loop through all the arguments
	for file in $@
	do
		# call echo "${file}" - just for testing

		# if the current argument is not a file, then exit with 2
		if [ ! -f ${file} ]; then
			echo "${file} is not a regular file"
			exit 2
		else
			# if it is a file, decode the first and last line of the file
			process ${file}
		fi
	done
fi
# If everything goes right, exit 0
exit 0
