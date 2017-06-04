#!/bin/sh -e
#  build content and make using unix Makefiles

mkdir -p ./bin/
mkdir -p ./build/
cd ./build/
cmake -DATLAS_BUILD_TESTS=TRUE -G "Unix Makefiles" ./..
make -j8
cd ../bin/
./AtlasTests
