#include <mpi.h>
#include <stdio.h>

int factorial(int n){
 int fact=1;
 for (int i=1; i<=n; i++){
  fact *= i;
 }
 return fact;
}

int main(int argc, char *argv[]){
 // init 
 int n=1000000000;
 int size, myRank;

 MPI_Init(&argc, &argv);
 MPI_Comm_size(MPI_COMM_WORLD,&size);
 MPI_Comm_rank(MPI_COMM_WORLD,&myRank);

 // computation
 double sum = 0.0;
 double fact;
 for (int i = myRank ; i < n; i += size) {
  fact=factorial(i);
  sum += 1/fact;
 }

 // reduce and output
 double e=0;
 MPI_Reduce(&sum, &e, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
 if(myRank==0){
  printf("e is approximately %.16f", e);
 }
 MPI_Finalize();
}
