#!/bin/sh -e
#  generate XCode project

mkdir -p ./bin/
mkdir -p ./xc-build/

rm -rfv ./xc-build/* > /dev/null
cd ./xc-build/

cmake -DATLAS_BUILD_TESTS=TRUE -G "Xcode" ./..
