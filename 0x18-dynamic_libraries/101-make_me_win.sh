#!/bin/bash
gcc *.o -fPIC -shared -o libruin.so
LD_PRELOAD=$PWD/libruin.so ./gm 9 8 10 24 75 9