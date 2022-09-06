//Поменять местами MAX и последнее отрицательный элемент местами (40),

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr int size = 40;
    int M[size];

    srand(time(nullptr));

    printf("M: ");
    for(int i = 0; i < size; ++i)
    {
        M[i] = rand() % 21 - 5;
        printf("%d ", M[i]);
    }

    int Max=M[0];
    int *A;//адрес максимального элемента

    for(int j = 0; j < size; ++j)
    {
        if (M[j] > Max){
        A = &Max;
        }
    printf("%d %p \n ", M[j], A);
    }
    return 0;
}





     // for(x=1; x <= 100; x++) printf("%d ", x);





    //int A[size] = {};
    //int k = 0;
   // for(int i = 0; i < size; ++i)
    //{
       // bool found = false;
       // int temp = M[i];
        //for(int j = 0; j < size && !found; ++j)
        //{
          //  if (j != i && temp == M[j]) {
          //      found = true;
           // }
      //  }

      //  if (!found) {
        //    A[k] = temp;
          //  ++k;
       // }//
  //  }

  //  printf("\nA: ");
   // for(int i = 0; i < k; ++i)
  //  {
  //      printf("%d ", A[i]);
  //  }

