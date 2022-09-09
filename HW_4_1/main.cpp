//swap the maximum element with the last negative element of the array  (40),

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr int size_array_M = 40;
    int array_M[size_array_M];

    srand(time(nullptr));

    printf("M: ");
    for(int i = 0; i < size_array_M; ++i)
    {
        array_M[i] = rand() % 21 - 5;
        printf("%d ", array_M[i]);
    }
     printf("\n---------------------------------\n");

    int max=array_M[0];//max element of array = ferst element of array
    int max_index_N=0;//number of a max array's element
    int last_negative = array_M[0];
    int last_negative_index = 0;

    for(int j = 0; j < size_array_M; ++j)//find max element and last negative element
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

     for(int j = 0; j < size_array_M; ++j)
     {
         printf("%d ", array_M[j] );
     }
     return 0;
}
