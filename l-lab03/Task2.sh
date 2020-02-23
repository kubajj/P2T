#!/bin/bash
if [ -e data ] || [ -e data/processed ] || [ -e docs ]; then
	echo "At least one of the files already exists. I cannot create any of them."
	exit 1 
else
	mkdir data
	mkdir data/processed
	mkdir docs
fi
