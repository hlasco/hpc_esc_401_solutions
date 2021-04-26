#include <mpi.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Initialize the MPI environment
    MPI_Init(&argc, &argv);

    // Get the number of processes and rank of the process
    int size, my_rank;
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);

    int my_sum = 0;

    int send_rank = my_rank;  // Send    buffer
    int recv_rank = 0;        // Receive buffer

    // Compute the ranks of left/right neighbours 
    int left_rank, right_rank;
    left_rank=(my_rank+size-1)%size;
    right_rank=(my_rank+1)%size;
    
    MPI_Request reqs[2];
    MPI_Status stats[2];
    // Loop over the number of processes
    //     send to right, receive from left
    //     update the send buffer
    //     update the local sum
    for(int i=0; i<size; i++){
	MPI_Irecv(&recv_rank, 1, MPI_INT, left_rank, 0, MPI_COMM_WORLD, &reqs[0]);
	MPI_Isend(&send_rank, 1, MPI_INT, right_rank, 0, MPI_COMM_WORLD, &reqs[1]);
	MPI_Waitall(2, reqs, stats); 
	send_rank=recv_rank;
	my_sum+=recv_rank;
    }
    printf("I am processor %d out of %d, and the sum is %d\n", my_rank, size, my_sum);

    // Finalize the MPI environment.
    MPI_Finalize();
}
