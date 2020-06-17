#!/usr/bin/bash

cd /github/workspace/tests/ &&
make |& tee tests_build.txt
makereturnval=${PIPESTATUS[0]}
[ $makereturnval -eq 0 ] || exit $makereturnval

./tests --verbose -j1 |& tee tests_results.txt
testreturnval=${PIPESTATUS[0]}
[ $testreturnval -eq 0 ] || exit $testreturnval