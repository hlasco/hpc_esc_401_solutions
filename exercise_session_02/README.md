# Exercise Session 02 #
In this session, you will compile and run your first programs on Piz Daint. This directory contains two versions of the code that were parallelized using MPI or OpenMP.

# Solutions
## Exercise 1
I had some trouble creating the repo and connecting to it over daint, as there was no remote connection at the first clone but I hope it all works now.

## Exercise 2
**What is cc?** command to compile a C-file<br />
**What does the flag -O3 do?** this specifies the optimization level of the compiling --> high optimization so compiling takes longer but the program runs faster (presumably)<br />
**What happens if we change this to -O0?** no optimization --> fast compiling and most debuggable code<br />

**Which programming environment are you currenlty using?** Standard is PrgEnv-cray<br />
**Switch to PrgEnv-gnu and compile the two codes using make.** after make all, the programs were compiled, see in folder<br >

## Exercise 3
**Run sinfo -p debug. What can you see?** The info about the current nodes on the debug partition<br />
**How can you print only your jobs?** squeue --me<br />
**Or any other user?** squeue -u <user><br />

Running the test program hostname worked, but it ended to fast to actually check if it was running. I think that's supposed to happen, as the only command is hostname.

**What do you need to add to redirect your output to output.log** #SBATCH --output output.log<br />
**and errors to errors.log?** #SBATCH --error errors.log<br />

**Generate a job script for both the MPI and OpenMP version of the cpi code from exercise 1. Run both on a single node using all cores. What is the output?** <br />
The job scripts and output logs can be found in the git repo. 

## Exercise 4
**Write a serial version of the code ”cpi.c” and edit the Makefile.**<br />
This can be found in the git repo.

