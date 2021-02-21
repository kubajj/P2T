#!/bin/bash

# If ./data or ./data/processed or ./docs exists, print error message and exit with failure code
if [ -e ./data ] || [ -e ./data/processed ] || [ -e ./docs ]; then
	echo "At least one of the files already exists. I cannot create any of them."
	exit 1 
else
	# create all the directories - first two are nested, so -p handles that
	mkdir -p data/processed
	mkdir docs
fi
# if everything goes well exit with 0
exit 0
