#include <stdio.h>
#include <math.h>
//Вывести на экран наибольшую площадь

int main()
{
    double x,y,z,Sx,Sy,Sz,m,M;
    printf("Input circle radius =");
    scanf("%lf",&x);
    printf("Input side of an equilateral triangle =");
    scanf("%lf",&y);
    printf("Input side of the square =");
    scanf("%lf",&z);
    Sx=M_PI*pow(x,2);
    Sy=(sqrt(3)/4)*pow(y,2);
    Sz=pow(z,2);
    m=Sx>Sy?Sx:Sy;
    M=m>Sz?m:Sz;
    printf("Max square=%lf", M);
    return 0;
}

