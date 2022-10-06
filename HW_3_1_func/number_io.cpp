#include "number_io.h"
#include <stdio.h>

unsigned int inputNumber()
{
    int n=0;
    while (n <= 0){
        printf("Input naturalnoe chislo:  ");
        scanf("%d", &n);
    }
    return static_cast<unsigned int>(n);
}
