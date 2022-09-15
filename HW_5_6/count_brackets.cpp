#include "count_brackets.h"
#include <stdio.h>

int count(int* str_1, int x)
{
    int count=0;
    while(*str_1) {
        if (*str_1 == '(') {
            ++count;
        } else if (*str_1 == ')') {
            --count;
            if (count < 0) {
                printf("false\n");
                return 0;
            }
        }
        ++str_1;
    }
    return count;
}
