#!/bin/bash

# Prints a welcome message
hello() {
	echo "Hello, ${USER}"
}

# Check if a file already exists and creates it if it does not.
create() {
	if [ -e $1 ]; then
		echo "${1} already exists."
	else
		touch $1
	fi
}

# Print all the parameters given to this function
list_args() {
	echo "Function parameters given:"
	while [ -n "$1" ]
	do
		echo "$1"

		# The shift command shifts all the parameters down one
		# i.e $3->$2, $2->$1 etc...
		shift
	done
}

hello

create data.txt

# Try to create a file with the name name as this script
# This will always fail
create ${0}

# This will list all of its paramaters
list_args 1 cheese hello data.txt

# This is exactly the same as the list_args function
# above, however it will not give the same result
echo "Script parameter given:"
while [ -n "$1" ]
do
	echo "$1"
    shift
done

hello

