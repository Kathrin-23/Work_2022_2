#include "number_io.h"
#include <stdio.h>

unsigned int inputNumber()
{
    int n=0;
    while (n <= 0){
        printf("Input naturalnoe chislo:  ");
        scanf("%d", &n);
    }
    return n;
}


void printRezalt(int sum)
{
    printf("Chislo tsifr = %d", sum);
}
