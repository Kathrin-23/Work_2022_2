#include <stdio.h>



int main()
{
    int n;
    printf("Input number: ");
    scanf("%d",&n);
    int sum=0;
    while (n%10)
    {
        sum+=1;
        n=n/10;
    }

    printf("%d ", n%10);
    printf("Chislo tsifr ravno = %d", sum);
            return 0;
}
