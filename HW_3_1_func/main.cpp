// программа считает количество цифр в натуральном числе
#include "number_io.h"
#include "number_sum.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <stdio.h>


int main()
{
   int n;

   n = inputNumber();
   printf ("%d", numDigits(n));

   return 0;
}

