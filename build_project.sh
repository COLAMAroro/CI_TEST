#!/usr/bin/env sh

cd /github/workspace &&
make |& tee build_results.txt
