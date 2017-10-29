#!/bin/bash
i=1
for args in "$*"
do
    echo "$i="$args
    i=$[$i+1]
done
i=1
for args in "$@"
do
    echo "$i="$args
    i=$[$i+1]
done
