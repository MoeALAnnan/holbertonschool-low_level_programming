#!/bin/bash
#creating libraries
gcc -c *.c
ar -rc liball.a *.o
