
// Triangle formula A = 1/2 * b * h

#include <stdio.h>

int main()
{
    float area, base, height;

    printf("Enter Base value: ");
    scanf("%f", &base);

    printf("Enter Height value: ");
    scanf("%f", &height);

    area = (float)0.5 * base * height;
    printf("The Triangle value is: %.2f\n", area);

    return 0;
}