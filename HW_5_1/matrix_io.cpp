#include "matrix_io.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printMatrix (int* array_M, int x)
{
    printf("M: ");
    for (int i = 0; i < x; ++i){
         printf("%d ", *(array_M + i ));
     }
     printf("\n---------------------------------\n");
}

void fillMatrix(int* array_M, int x)
{
    srand(time(nullptr));
    for (int i = 0; i < x; ++i){
           *(array_M + i) = rand() % 10-5;
    }

}
