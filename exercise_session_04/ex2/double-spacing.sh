#!/bin/bash
if test -f $1; then
 cat $1 | while read line; do
  echo "$line" 
  echo " "
 done
else
 echo "$1 doesn't exist"
fi

