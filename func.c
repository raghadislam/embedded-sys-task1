#include <stdio.h>
#include <stdlib.h>
double calcArea(double r);
int main()
{
    double r,area;
    printf("enter the radius\n");
    scanf("%lf",&r);
    area= calcArea(r);
    printf("Area= %lf\n",area);
    return 0;
}
double calcArea(double r)
{
    return r*r*3.14;
}