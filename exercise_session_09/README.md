# Exercise Session 04 #

## Exercise 1
Setup hadoop

## Exercise 2
**Write a script to run the map&reduce procedure locally on the files provided in the course repository** see script.sh <br />
Then I created the hadoop filesystem and ran the script pymapred.sh: <br />
**How many map and reduction operations were performed?** 7 map tasks (as 7 files) and then 1 reduce <br />
**How many lines/entries were treated?** 35371  <br />
**Which output folder(s)/file(s) were created?** An "output" folder in the hadoop filesystem with a file _SUCCESS and the actual output: part-00000, see output folder <br />
**Can you find the output files?** No, actually not  <br />

Question: Why is the local output not the same as hadoop output? 
