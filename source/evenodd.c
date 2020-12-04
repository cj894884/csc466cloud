#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
  int my_rank,size; 
    
  /* Initialize the MPI environment */
  MPI_Init(&argc, &argv);

  /* Get the rank of the process */
  MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);

  if (my_rank % 2 == 1) {
    printf ("Process %d out of %d  is odd \n", my_rank,size);
  } else {
    printf ("Process %d out of %d  is even  \n", my_rank,size);
  }
  MPI_Finalize();
  
}
