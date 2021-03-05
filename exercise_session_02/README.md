# Exercise Session 02 #
In this session, you will compile and run your first programs on Piz Daint. This directory contains two versions of the code that were parallelized using MPI or OpenMP.

# Solutions
## Exercise 1
I had some trouble creating the repo and connecting to it over daint, as there was no remote connection at the first clone but I hope it all works now.

## Exercise 2
**What is cc?** command to compile a C-file
**What does the flag -O3 do?** this specifies the optimization level of the compiling --> high optimization so compiling takes longer but the program runs faster (presumably)
**What happens if we change this to -O0?** no optimization --> fast compiling and most debuggable code

**Which programming environment are you currenlty using?** Standard is PrgEnv-cray
**Switch to PrgEnv-gnu and compile the two codes using make.** after make all, the programs were compiled, see in folder 
