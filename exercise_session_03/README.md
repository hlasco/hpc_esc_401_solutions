# Exercise Session 03 #

# Solutions
## Exercise 1
**What are the values of the execution times? Why are they different?** The first time is 0.3768 and the other is 0.379 which is a smaller difference than expected but maybe because of only 12 cpus being available. I guess the difference is because of the MPI initialization, reduction and finalizing it has to do.<br />

## Exercise 2
**What results does your code produce? How big is the difference in execution time with the different flags?** <br />
-O0: sum=10022429073.341873 for Time elapsed after getTime() is 5.458 seconds<br />
-O1: sum=10022429073.341873 for Time elapsed after getTime() is 2.381 seconds<br />
-O2: sum=10022429073.341873 for Time elapsed after getTime() is 2.376 seconds<br />
-O3: sum=10022429073.341873 for Time elapsed after getTime() is 2.386 seconds<br />
As you can see, no progress from -O1 to -O3, I can't figure out why. Maybe we can figure out my problem in the exercise.

**How did the compiler optimize the code? How can you make it even faster?** The machine code gets optimized, faster by adding -ffast-math and/or -mavx2 flags<br />

**Where did you insert the line? How did you compile? Provide the job script.** Before the for loop to parallelize the loop, compiled with best optimization and added flags. The job script can be found in the directory.<br />
**Plot the speedup and discuss.**<br />
