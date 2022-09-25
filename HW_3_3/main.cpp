//Поменять местами первую и последнюю цифры числа

// программа считает количество цифр в натуральном числе

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int N;
    int x;

    printf("Input naturalnoe chislo: ");
    scanf("%d",&n);
    N = n;
    int reversedN = 0;
    if (n<=0)
        printf("Eto NE naturalnoe chislo");
    else
    {
        int sum=0;
        while (n%10)
        {
            sum+=1;
            n=n/10;
         }
    //printf("Chislo tsifr ravno = %d\n", sum);
    //printf("N  = %d\n", N);
    // reversedN - искомое число

    reversedN = reversedN + (N%10) * pow (10, (sum-1));
    //printf("Chislo  = %d\n", reversedN);
    N /= 10;
    //printf("N  = %d\n", N);
    x = pow(10,(sum-2));
    //printf("x  = %d\n", x);
    reversedN = reversedN + ((N%x) * 10);
    //printf("reversedN  = %d\n", reversedN);
    N /= pow(10,(sum-2));
    //printf("N  = %d\n", N);
    reversedN = reversedN + N;
    printf("Chislo  = %d", reversedN);
    }

    return 0;
}

