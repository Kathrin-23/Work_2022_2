//swap the maximum element with the last negative element of the array  (40),
#include "matrix_io.h"
#include "matrix_new.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr int size_array_M = 40;
    int array_M[size_array_M];

    fillMatrix(reinterpret_cast<int*>(array_M),size_array_M);

    printMatrix(reinterpret_cast<int*>(array_M),size_array_M);

    NewMatrix(reinterpret_cast<int*>(array_M),size_array_M);

    printMatrix(reinterpret_cast<int*>(array_M),size_array_M);

     return 0;
}
