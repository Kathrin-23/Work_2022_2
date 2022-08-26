#include <stdio.h>
#include <math.h>
//Find Y if X is known

int main()
{
    double x,y;
    printf("Input x =");
    scanf("%lf",&x);
    y= ((2*(cos(x-(M_PI/6))+sqrt(2)))/((1/(2*log(x)))+pow(sin(pow(x,2)),2)))*exp(3*x);
    printf("Y=%lf", y);
    return 0;
}

