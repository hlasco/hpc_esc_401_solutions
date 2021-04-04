#!/bin/bash

for d in nbody_serial*.out; do

c=$(cat $d);
c=${c%seconds*}
c=${c#*particles: }

d=${d#*serial\_}
d=${d%\.*}
echo $d $c
done
