#include <stdio.h>



int main()
{
    int n;
    printf("Input number: ");
    scanf("%d",&n);
    int sum=0;
    int x;
    do
    {
        x=n%10;
        sum+=1;
        n=n/10;
    }
        while (x);

    printf("%d ", n%10);
    printf("Chislo tsifr ravno = %d", sum);
            return 0;
}
