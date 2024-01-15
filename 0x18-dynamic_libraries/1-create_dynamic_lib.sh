#!/bin/bash
gcc -c *.c fpic -o
gcc *.o -shared -o liball.so
ranlib

