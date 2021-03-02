#!/bin/bash

# This script takes a directory name as a parameter and:
# 	a) Checks if the directory already exists
#	b) Creates it if it does not exist
#	c) Moves into the directory

# gtd stands for Go To Directory
function gtd {
  # Check if directory exist
  if [ -e ${1} ]; then
    # File exists, but is not a directory - either delete or exit with failure
    if [ ! -d ${1} ]; then
      echo "${1} is not a directory. Do you want to delete it? [Y/N]"
      read response
      if [ ${response} == "Y" ]; then
        rm -f ${1}
        echo "${1} deleted."
        mkdir ${1}
        echo "Moving into ${1}"
        cd ${1}
      else
        echo "Cannot move into a file which is not a directory."
        exit 1
      fi
    # Enter directory
    else
      echo "Moving into ${1}"
      cd ${1}
    fi
  # Create directory and enter it
  else
    mkdir ${1}
    echo "Moving into ${1}"
    cd ${1}
  fi
  # If we entered the directory the shell environtment did not, so when the script finishes,
  # the directory was not changed
  # To check that we are actually in the directory uncomment following line

  #pwd
}

#-------------------------------------------#
# This script needs an argument - directory #
#-------------------------------------------#
gtd ${1}

# Terminate with success
exit 0
