#include <stdio.h>
// программа считает количество цифр в натуральном числе
int main()
{
    int n;
    printf("Input naturalnoe chislo: ");
    scanf("%d",&n);
    if (n<=0)
        printf("Eto NE naturalnoe chislo");
    else
    {
        int sum=0;
        while (n%10)
        {
        sum+=1;
        n=n/10;
        }
    printf("Chislo tsifr ravno = %d", sum);
    }
    return 0;
}
