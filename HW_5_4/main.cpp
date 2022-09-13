//Вычислить сумму элементов матрицы, лежащих слева от побочной диагонали
#include "out_matrix.h"
#include "matrix_sum.h"
#include <stdio.h>

/*
 * 1 0 0 0 0 2
 * 0 1 0 0 2 0
 * 0 0 1 2 0 0
 * 0 0 2 1 0 0
 * 0 2 0 0 1 0
 * 2 0 0 0 0 1
 * */

int main()
{
    constexpr int size_arr = 5;
    int M[size_arr][size_arr];

    fillMatrix(reinterpret_cast<int*>(M),size_arr,size_arr);
    printMatrix(reinterpret_cast<int*>(M),size_arr,size_arr );

    const int resultSum =sum(reinterpret_cast<int*>(M),size_arr,size_arr);

    printf("ResultSum: %d\n", resultSum );

    return 0;
}
