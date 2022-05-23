#include "mpi.h"

int main(int argc, char **argv)
{
    /* code */
    int nproc;
    int yo;

    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &nproc);
    MPI_Comm_rank(MPI_COMM_WORLD, &yo);

    MPI_Finalize();
    
}
