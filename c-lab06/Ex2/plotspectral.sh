#!/bin/bash
echo $1
gnuplot -persist -e "splot '$1' u 1:2:3 w d" -