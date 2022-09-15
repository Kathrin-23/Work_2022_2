#include "matrix_new.h"
#include <stdio.h>

void NewMatrix(int* array_M, int* size_array_M, int x)
{
    int max=array_M[0];//max element of array = ferst element of array
    int max_index_N=0;//number of a max array's element
    int last_negative = array_M[0];
    int last_negative_index = 0;

    for(int j = 0; j < *size_array_M; ++j)//find max element and last negative element
    {
        if (array_M[j] > max){
            //A = &Max;
            //N=j;
            max = array_M[j];
            max_index_N=j;
        }
        if (array_M[j] < 0){
             last_negative = array_M[j];
             last_negative_index = j;
         }
     }

     array_M[max_index_N] = last_negative;
     array_M[last_negative_index] = max;

}


