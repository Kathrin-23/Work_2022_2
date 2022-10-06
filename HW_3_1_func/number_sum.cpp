#include "number_sum.h"
#include <stdio.h>

unsigned int numDigits(unsigned int n)

{
    unsigned int sum = 1;
    while (n/10) {
        sum += 1;
        n = n/10;
    }

    return sum;
}
