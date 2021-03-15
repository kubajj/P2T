#! /usr/bin/bash

gnuplot -persist -e "set term x11; plot '$1' u 1:3 w l, 0 w l;"

