//Вычислить сумму элементов матрицы, лежащих слева от побочной диагонали

#include <iostream>
#include <stdlib.h>
#include <time.h>

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
    srand(time(nullptr));
    for (int i = 0; i < size_arr; ++i){
        for (int j = 0; j < size_arr; ++j){
            M[i][j] = rand() % 10;
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    int resultSum = 0;
    for (int i = 0; i < size_arr; ++i){
        for (int j = 0; j < size_arr - i - 1; ++j){
            resultSum += M[i][j] ;
        }
    }
    printf("ResultSum: %d\n", resultSum );

    return 0;
}
