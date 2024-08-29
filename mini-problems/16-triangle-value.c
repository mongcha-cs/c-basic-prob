#include <stdio.h>

int main()
{
    float area, base, height;

    printf("Enter Height value: ");
    scanf("%f", &height);

    printf("Enter Base value: ");
    scanf("%f", &base);

    // Triangle formula = A = 1/2 * h * h
    area = (float)0.5 * height * base;

    printf("The Triangle value is: %.2f\n", area);

    return 0;
}