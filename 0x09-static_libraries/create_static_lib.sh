#!/bin/bash
gcc -c *.c
ar rc libmy.a *.o
ar rc liball.a *.o

