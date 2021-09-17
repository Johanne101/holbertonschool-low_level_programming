#!/bin/bash
gcc -c *.c
ar rc libmy.a *.o
randlib liball.a
