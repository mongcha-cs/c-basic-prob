
// Centigrade to fahrenheit program
// Formula is °F = (9/5 × °C) + 32; or F = (1.8 * c) + 32;

#include <stdio.h>

int main()
{
    float c, F;

    printf("Enter centigrade value: ");
    scanf("%f", &c);

    F = (1.8 * c) + 32;
    printf("Fahrenheit value is: %.2f", F);

    return 0;
}