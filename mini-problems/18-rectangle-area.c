
// Rectangle formula A = l × w.

#include <stdio.h>

int main()
{

    float length, width, area;

    printf("Enter length value: ");
    scanf("%f", &length);

    printf("Enter width value: ");
    scanf("%f", &width);

    area = length * width;

    printf("Area of Rectangle value = %.2f\n", area);

    return 0;
}