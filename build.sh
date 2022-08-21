#! /bin/bash

DIR=`mktemp -d`
for FILE in `ls src`
do
	g++ src/$FILE -o $DIR/$FILE -c -std=c++20 -I include/ -l util
done
ar crs ${1:-util.a} `ls -d $DIR/*`
rm -rf $DIR
