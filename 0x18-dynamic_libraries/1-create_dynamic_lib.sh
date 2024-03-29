#!/bin/bash
gcc -fPIC *.c
gcc -shared *.c -o liball.so
