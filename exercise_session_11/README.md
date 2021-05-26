#Solutions

## Exercise 1
Tried #pragma acc kernels --> dependencies prevented parallelization. <br />
Tried #pragma acc parallel loop --> worked and CPU is faster for different N. <br />
memcopy and daxpy test of size 2<br />
-------<br />
timings<br />
-------<br />
axpy (openmp): 0 s<br />
axpy (openacc): 0.000216961 s<br />
<br />
============ PASSED<br />
memcopy and daxpy test of size 65536<br />
-------<br />
timings<br />
-------<br />
axpy (openmp): 8.91685e-05 s<br />
axpy (openacc): 0.000332832 s<br />
<br />
============ PASSED<br />
<br />
Tried extending with #pragma acc data constructs --> faster ACC but OMP didn't seem to work anymore and had therefore multiple errors, couldn't make it work <br />

## Exercise 2
Extended the two methods but can't figure out what to put in the ifdef _OPENACC clause. I guess it has to be something with adding the blur method to the parallel region (as the openacc doesn't actually blur and always outputs 0) but I can't figure out how. <br />

## Exercise 3
Extended the code with #pragma acc parallel loop reduction(+: sum) (atomic possible as well) to avoid race conditions, as multiple threads access and update sum simultaneously. Host still faster (latency?)
