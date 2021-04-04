#!/bin/bash

for d in nbody_omp*.out; do

c=$(cat $d);
c=${c%seconds*}
c=${c#*particles: }

d=${d#*omp\_}
d=${d%\.*}
echo $d $c
done
