
/*
Centigrade and Celsius both refer to the same temperature scale. Anders Celsius, a Swedish astronomer, initially proposed a temperature scale with water boiling at 0 degrees and freezing at 100 degrees.

In 1948, the General Conference on Weights and Measures (CGPM) decided to standardize new Centigrade name. Celsius is the new name instead of Centigrade. But units of measurement remains same. New measurement unite which Boiling point at 100° and Freezing at 0°.
*/

// Centigrade to fahrenheit program
// Formula is °F = (9/5 × °C) + 32; or F = (1.8 * c) + 32;

#include <stdio.h>

int main()
{
    float c, F;

    printf("Enter Celsius value: ");
    scanf("%f", &c);

    F = (1.8 * c) + 32;
    printf("Fahrenheit value is: %.2f", F);

    return 0;
}