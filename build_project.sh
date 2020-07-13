#!/usr/bin/bash

workdir=/github/workspace

[ -d workdir ] || workdir=./

cd $workdir &&
make |& tee build_results.txt
makereturnval=${PIPESTATUS[0]}
[ $makereturnval -eq 0 ] || exit $makereturnval
