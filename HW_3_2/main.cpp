// Finde gcd for three number

#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    int gcd;

    printf("Input three natural numbers:  \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    for(int i=1; (i <= n1) && (i <= n2) && (i <= n3); ++i)
    {
        if(n1%i == 0 && n2%i == 0 && n3%i == 0)
            gcd = i;
    }
    printf("NOD -  %d\n", gcd);

    return 0;
}
