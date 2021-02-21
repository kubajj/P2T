#!/bin/bash

# create a new variable DIR which is initialized with the current timestamp
DIR=$(date +%s)
# check if there exists a file with name of the current timestamp
if [ -e ${DIR} ]; then
	echo "${DIR} already exists"
	# if it does, inform the user and exit with 1
	exit 1
else
	# if it does not, create a directory with that name
	mkdir ${DIR}
	# create 10 files
	for n in {1..10}
	do
		# create a file in the new directory with name randomN.data
		touch ${DIR}/random${n}.dat
		# put 50 random numbers to the file
		for r in {1..50}
		do
			# append one random number to the file
			echo $RANDOM >> ${DIR}/random${n}.dat
		done	
	done
fi
# if everything goes well, exit with 0
exit 0
