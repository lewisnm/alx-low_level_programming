#!/bin/bash
gcc -c *.c fpic -o liball.o
gcc *.o -shared -o liball.so
