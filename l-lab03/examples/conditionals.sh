#!/bin/bash

# A set of examples demonstrating conditionals

# check for a file called "hello"
if [ -f hello ]; then
	echo "Found hello."
fi  

string="Physics-2T"
# Is the string empty?
if [ -n "$string" ]; then
	echo $string
fi

# Does 1 = 2?
if [ 1 -eq 2 ]; then
	echo "One equals two."
# Does 1 = 3?
elif [ 1 -eq 3 ]; then
	echo "One equals three."
# None of the above tests were true
else
	echo "One doesn't equal 2 or 3."
fi

# Check for a files which is readable AND which is also a directory
if [ -r answers ] && [ -d answers ]; then
	echo "You can read all the answers."
else
	echo "You can't read the answers I'm afraid."
fi

exit 0
