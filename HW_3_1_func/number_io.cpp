#include "number_io.h"
#include <stdio.h>

void inputNumber(int n)
{
    printf("Input naturalnoe chislo:  ");
    scanf("%d", &n);
}

void printRepeat(char A, int n)
{
    if (n<=0)
    A = 'Eto NE naturalnoe chislo!';
    printf("%s", A);
}

void printRezalt(int sum)
{
    printf("Chislo tsifr = %d", sum);
}
