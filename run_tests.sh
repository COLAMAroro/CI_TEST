#!/usr/bin/env sh

cd /github/workspace/tests &&
make |& tee tests_build.txt && ./tests --verbose -j1 |& tee tests_results.txt
