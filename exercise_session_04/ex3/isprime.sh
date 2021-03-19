#!/bin/bash
function isprime(){
 local words=$(factor $number | wc -w)
 return $(expr $words \> 2)
}
number="$1"
while true; do
 if [ "$number" -eq "$number" ] 2> /dev/null; then
  break
 fi
 read -p "Enter an integer! " number
done
if isprime number; then
 echo "$number is prime"
else 
 echo "$number is not prime"
fi
