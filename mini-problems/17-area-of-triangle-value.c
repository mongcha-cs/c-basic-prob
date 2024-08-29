
// formula
/*
 * area = sqrt(s * (s-a) * (s-b) * (s-c));
 * s = (a+b+c)/2;
 */

#include <math.h>
#include <stdio.h>

int main()
{

    double a, b, c, s, area;

    printf("Enter triangle 3 area value: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of triangle value: %.2lf", area);

    return 0;
}