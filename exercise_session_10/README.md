# Exercise Session 10 #

## Exercise 1
I have modified the code, loaded the modules, compiled the code and ran it. <br /> 
**Are the times of each iteration the same? Why (not)?** The first time the code is run, it takes longer, as the gpu has to setup the openacc environment and so on. The following iterations are almost the same and a lot faster than the first. <br />

## Exercise 2
I have loaded the modules, compiled the code and ran it. Then I extended it with a for loop so the code runs multiple times. <br />
**Compare the execution time with your results from exercise 1. Are the times of each iteration the same? Why (not)?** In this case, the first one is also a little bit slower. The later ones are faster but not as much as with OpenACC, this might be because we haven't used the optimal block/thread sizes. <br />


