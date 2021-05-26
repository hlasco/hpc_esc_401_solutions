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


