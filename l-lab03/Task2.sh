#!/bin/bash

# make sure that none of the directories exists and if it does, exit with error message
if [ -e data ] || [ -e data/processed ] || [ -e docs ]; then
	echo "At least one of the files already exists. I cannot create any of them."
	exit 1 
else
	# create all the directories one by one
	mkdir data
	mkdir data/processed
	mkdir docs
fi
# if everything goes well exit with 0
exit 0
