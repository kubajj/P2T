#!/bin/bash

# A set of examples demonstrating variables

echo "This script is called $0"
echo "It had $# parameter(s) passed."
echo "Its process ID is ${$}."
echo "The first paramter was $1"
echo "The eighth was ${8}"

# Set the files variable to the output of "ls *.sh"
files=$(ls *.sh)

# Print all the files stored in the "files" variable
for script in $files
do
	echo $script
done

# THIS IS IMPORTANT!!!

# The quotes are needed otherwise the script will give an error
empty=""
if [ "$empty" = "" ]; then
	echo "This works"
fi

# This will give an error because it will be evaluated as [ = "" ]
if [ $empty = "" ]; then
	echo "This doesn't work :("
fi

exit 0
