#!/bin/env bash

i=1
while(( $i <= 6 ))
do
  echo "============================"
  echo "main$i:"
  ./main$i
  let i++
done
