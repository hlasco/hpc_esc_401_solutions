#include <mpi.h>
#include <stdio.h>
#include "init.h"

int start_MPI(int* my_rank, int* size){
	printf("Setting MPI environment\n");
	MPI_Init(NULL,NULL);
	MPI_Comm_size(MPI_COMM_WORLD,size);
	MPI_Comm_rank(MPI_COMM_WORLD,my_rank);

	return 0;
}

int close_MPI(){
	MPI_Finalize();
	return 0;
}

int mpi_get_domain(int nx, int ny, int my_rank, int size, int* min_x, int* max_x, int* min_y, int* max_y){
	/*
	define corners or local domains
	*/
    *min_y=0;
    *max_y=ny;

    *min_x=my_rank*nx/size;
    if (my_rank == size -1)
        *max_x=nx;
    else
        *max_x=(my_rank+1)*nx/size;


	printf("I am rank %d and my domain is: xmin, xmax, ymin, ymax: %d %d %d %d\n",my_rank,*min_x,*max_x,*min_y,*max_y);
	return 0;
}

int halo_comm(params p, int my_rank, int size, double** u, double* fromLeft, double* fromRight, MPI_Requests* requests){
	
	/* define columns to be sent to right neighbour and to the left neighbour,
    also receive one both form left and right neighbour*/


    p.right_rank = my_rank + 1;
    if (p.right_rank >= size) p.right_rank = -1;
    p.left_rank = my_rank - 1;
    int size_x = p.xmax - p.xmin;
    int size_y = p.ymax - p.ymin;

    MPI_Datatype column_type;
    MPI_Type_vector(p.ymax - p.ymin, 1, 1, MPI_DOUBLE, &column_type);
    MPI_Type_commit(&column_type);

    if (p.right_rank>=0) MPI_Isend(&u[size_x-1][0],1,column_type,p.right_rank,0, MPI_COMM_WORLD, &requests[0]);
    if (p.left_rank>=0) MPI_Isend(&u[0][0],1,column_type,p.left_rank,0, MPI_COMM_WORLD, &requests[1]);
    if (p.left_rank>=0) MPI_Irecv(fromLeft,1,column_type,p.left_rank,0, MPI_COMM_WORLD, &requests[2]);
    if (p.right_rank>=0) MPI_Irecv(fromRight,1,column_type,p.right_rank, 0,MPI_COMM_WORLD, &requests[3]);

    MPI_Waitall(4, requests, MPI_STATUS_IGNORE);

    MPI_Type_free(&column_type);

	return 0;
}


int ALLREDUCE(double* loc_diff, double* loc_sumdiff){

	MPI_Allreduce(loc_diff, loc_sumdiff, 1, MPI_DOUBLE, MPI_SUM, MPI_COMM_WORLD);
	return 0;

	}

