#include "number_sum.h"
#include <stdio.h>

void sumTsifr(int sum, int n)

{
    sum = 0;
    while (n%10) {
        sum += 1;
        n = n/10;
    }
}
