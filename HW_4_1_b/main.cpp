//Определить местоположение элементов массива А(30), не встречающихся в массиве В(15)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr int size1 = 30;
    int A[size1];

    srand(time(nullptr));

    printf("A: ");
    for(int i = 0; i < size1; ++i)
    {
        A[i] = rand() % 21 - 5;
        printf("%d ", A[i]);
    }

    {
        constexpr int size2 = 15;
        int B[size2];

        srand(time(nullptr));

        printf("B: ");
        for(int i = 0; i < size2; ++i)
        {
            B[i] = rand() % 21 - 5;
            printf("%d ", B[i]);
        }

        for( int x = 0; x < size1; ++x)
        {
            for(int y = 0; y < size2; ++y)
            {
                if (A[x]!=B[y]){
                    printf("Element massiva A %d raspolozen na %d  meste ", A[x],x+1);
                }
            }

         }

  }
      return 0;
}
