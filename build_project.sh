#!/usr/bin/bash

cd /github/workspace/ &&
make |& tee build_results.txt
makereturnval=${PIPESTATUS[0]}
[ $makereturnval -eq 0 ] || exit $makereturnval