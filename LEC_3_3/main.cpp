//ВВЕСТИ НАТУРАЛЬНОЕ ЧИСЛО N
//ОПРЕДЕЛИТЬ ЯВЛЯЕТСЯ оно совершенным
//соаршенне число - число =сумме всех своих делителей не превосходящих свое число
//6=1+2+3
//28=1+2+4+7+14
//несоверш - 27=1+3+9+..

#include <stdio.h>

int main()
{
    int n;
    printf("Input N: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i < n; ++i)
    {
        if (n%i == 0)
        {
            sum = sum + i;
        }
    }
    printf("%s",sum == n? "True": "False");
    return 0;
}