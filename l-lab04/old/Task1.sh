#!/bin/bash

# loop through all files in the directory
for file in *
do
	# if the file does not have nonzero size -> so it is empty, then:
	if [ ! -s ${file} ]; then
		# ask the user for confirmation
		echo "Do you want to delete ${file}? [Y/N]"
		# read user's answer
		read answer
		# check if it is Y, which means that I should delete the file
		if [ ${answer} == "Y" ]; then
			# print that the file is deleted
			echo "Deleting ${file}"
			# delete the file
			rm ${file}
		fi
	fi
done
# terminate
