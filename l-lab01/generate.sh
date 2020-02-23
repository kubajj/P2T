#!/bin/bash

# A data generation script for creating fake data files and a hidden
# file for Lab01.

# James McMinn - 0800890m@student.gla.ac.uk
# June 2010
# (Modified G. Roy 2017)

if [ ! -d ~/experiment ]; then
	echo "No directory $HOME/experiment found, cannot generate data."
    echo "Please create the experiment data as outlined in the labsheet."
    echo "      Hint: mkdir ~/experiment"
    exit 1
fi

if [ ! -d ~/experiment/data ] ; then
    echo "No directory $HOME/experiment/data found, cannot generate data."
    echo "Have you created the data, docs and results directories?"
    echo "      Hint: mkdir -p ~/experiment/{data,docs,results}"
    exit 1
fi

touch ~/experiment/data/.PhysicsIsFun

for i in $(seq 1 50)
do
	touch ~/experiment/$i.data
	for j in $(seq 1 10000 1000000)
	do
		VAL=`expr $j + $RANDOM`
		echo "$VAL" >> ~/experiment/$i.data
	done
done       

if [ -f ~/experiment/50.data ]; then
	echo "Data generated!"
else                                              
	echo "There was a problem generating the data."
	echo "Please check that the folder $HOME/experiment/ exists and is spelt correctly..."
fi
