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

    int Max=M[0];//максимальный размер массива
    int *A;//адрес максимального элемента
    int N;//номер элемента массива

    for(int j = 0; j < size; ++j)//находим максимальный элемент
    {
        if (M[j] > Max){
        A = &Max;
        N=j;
        Max = M[j];
        }
    //printf("%d %p \n ", M[j], A);

    }
    printf("%d %d %p \n ", Max, N, A);

    int *B;//адрес отрицательного элемента
    B=&M[0];

    int K;//номер последнего отрицательного элемента
    int otr;//значение последнего отрицательного элемента

    for(int j = 0; j < size; ++j)//находим последний отрицательный элемент
      {
          if (M[j] < 0){
              if (B<&M[j]){
                  B=&M[j];
                  K=j;
                  otr=M[j];
              }
           }

        }
        printf("%d %d %p \n ", otr, K, B);

      int L[1];//массив из одного элемента
      L[0]=M[K];
      M[K]=M[N];
      M[N]=L[0];

      for(int j = 0; j < size; ++j)
      {
          printf("%d ", M[j] );

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

