#!/bin/bash

# do the following procedure 100 times
for i in {1..100}
do
  # generate random number and append it to a file called random, if random is a directory, it won't work
  echo $RANDOM >> random
done
