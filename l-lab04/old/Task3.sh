#!/bin/bash

# if the file from argument does not exist:
if [ ! -e ${1} ]; then
	# inform user that it does not exists
	echo "Directory with this name does not exits."
	echo "Creating ${1}."
	# and create a new directory with the name of the argument
	mkdir ${1}
else
	# if it exists, but it is not a directory, exit with an error message
	if [ ! -d ${1} ]; then
		echo "${1} is not a directory but it exists"
		exit 1
	fi
	# if it is already a directory, continue to the next step
fi
# go to that directory
cd ${1}
# this executes the change directory command, but it opens a new instance of bash
exec bash
