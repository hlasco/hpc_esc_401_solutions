#!/bin/bash
if test -f $1; then
 cat $1 | while read line; do
  if test -n "$line"; then
   echo "$line" 
  fi
 done
else
 echo "$1 doesn't exist"
fi

