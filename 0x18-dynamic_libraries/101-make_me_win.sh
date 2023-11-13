#!/bin/bash
echo "int rand() { return 5; }" > custom_lib.c
gcc -shared -fPIC -o custom_lib.so custom_lib.c && LD_PRELOAD=./custom_lib.so ./gm 9 8 10 24 75 9