#!/bin/bash

# A set of examples demonstrating while loops

echo "The password is password."

# Keep going till they enter "password"
while [ "$password" != "password" ]
do
	echo "Please enter the password:"
	read password
done

# Loop until date tells us that its half past the minute
# There is the potential for it to miss the 1 second window here...
while [ $(date +%S) -ne 30 ]
do                            
	sleep 1
done

echo "It's half past the minute."
	
# Check for a lock file every 5 seconds
while [ -f .locked ]
do
	sleep 5
done

exit 0
