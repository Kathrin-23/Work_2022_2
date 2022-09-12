//Дана матрица размером 7х7. Поменять местами k-й столбец с k-ой строкой

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
    constexpr int size_arr = 7;
    int M[size_arr][size_arr];
    srand(time(nullptr));
    for (int i = 0; i < size_arr; ++i){
        for (int j = 0; j < size_arr; ++j){
            M[i][j] = rand() % 10;
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    int k;
    printf("Please enter raw: ");
    scanf("%d", &k);
    if (k < 0 || k > 6) printf("You have entered the wrong number\n ");

    else
    {
        for (int i = 0; i < size_arr; ++i){
            int temp = M[i][k];
            M[i][k]=M[k][i];
            M[k][i] = temp;
        }
        printf("\n");

        for (int i = 0; i < size_arr; ++i){
             for (int j = 0; j < size_arr; ++j){
                  printf("%d ", M[i][j]);
             }
             printf("\n");
        }
    }
    return 0;
}
