#!/bin/bash
RE="Temperature: ([0-9]+\.[0-9]+) deg at time: ([0-9]+\.[0-9]+) sec"
n=0
total=0
while read A ; do
 if [[ "$A" =~ $RE ]] ; then
  n=$(echo "$n +1" | bc)
  total=$(echo "$total + ${BASH_REMATCH[1]}" | bc)
  echo "${BASH_REMATCH[2]} ${BASH_REMATCH[1]}"
 fi
done

average=$(echo "$total / $n" | bc)
echo "Average temperature: $average"
