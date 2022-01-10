#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o libal.so *.o
