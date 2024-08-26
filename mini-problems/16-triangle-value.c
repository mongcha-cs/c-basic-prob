#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Enter Height value: ");
    scanf("%f", &height);

    printf("Enter Base value: ");
    scanf("%f", &base);

    // Triangle formula = A = 1/2 * h * h
    area = (float)1 / 2 * height * base;

    printf("The Triangle value is: %.2f\n", area);

    return 0;
}