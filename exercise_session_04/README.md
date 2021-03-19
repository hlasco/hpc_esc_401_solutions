# Exercise Session 04 #

# Solutions
## Exercise 1
**What are the file permissions for your $HOME and $SCRATCH directory on Daint?** $HOME: drwx------ (only me can access, write and execute) and $SCRATCH: drwxr-xr-x (everyone can access and execute but only I can write)<br />
**Can you excess other student’s (or members in your group) $HOME or $SCRATCH? Why (not)?** I can access their Scratch but not their home because of the access permissions from above.<br />
**If you create a new file in these directories, what are the default permissions? Same as the directory (without d and x, depending on execution possibility or not)** <br />
**What are the permissions of /users/hlascomb?** drwxr-x---<br />
**If I tell you that there is a file /users/hlascomb/hpc exam solution.txt, could you open it and read its content?** No I can't access<br />
**Would you be able to write it?** No <br />

**What command can you use to set the access permissions for a directory so only the owner has (full) access?** chmod 700<br />
**Create a file and set its permissions to 000. Can you do anything with it now? Is the file completely lost?** No one (except root i guess) can access (and therefore write or execute it) but it can still be removed or it's permission changed.<br />

## Exercise 2
The scripts are in the exercise 2 directory<br />

## Exercise 3
The script is in the exercise 3 directory <br />
**How much time did it take to compute the result?** Both computations took 0.011 seconds and they're both prime.<br />
