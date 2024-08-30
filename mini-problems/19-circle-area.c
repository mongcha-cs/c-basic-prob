
// Circle formula A = πr2

#include <stdio.h>

int main()
{
    // Pi is an irrational number, which means it is not equal to the ratio of any two whole numbers
    double pi = 3.141592653589793238462643383279502884197;
    float r, radius;

    printf("double variable size: %lu\n\n", sizeof(pi));

    printf("Enter Radius value: ");
    scanf("%f", &r);

    radius = (float)pi * r * r;
    printf("Circle area value is: %.4f\n", radius);

    return 0;
}