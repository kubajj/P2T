#!/bin/bash

# A set of examples demonstrating for loops

# Echo some values
for value in "this" "will" "echo" "lots" "of" "values" "this has spaces"
do
	echo $value
done

# Loop through all the files in the working directory
for file in *
do

	# Check if the file is a directory
	if [ -d $file ]; then
		echo "$file is a directory."

	# Check if it's a regular file
	elif [ -f $file ]; then
		echo "$file is a regular file."

	# It's nither of the above
	else
		echo "$file isn't a file or directory. What is it?!"
	fi

done

# {0..10} gets expanded to 1 2 3 4 5 6 7 8 9 10
for i in {0..10}
do
	echo "${i}..."
done

# Same as above, except in steps of 2
for i in {0..10..2}
do
	echo "${i}..."
done

exit 0
