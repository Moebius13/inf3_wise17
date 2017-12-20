#!/bin/bash

for file in $(ls *.cpp); do
    fname=$(echo -n $file | sed s/\.cpp$//)
    if [ ! -e "$fname.h" ]; then cp "./$fname.cpp" "./$fname.h"; fi
done;
