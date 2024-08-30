
// Fahrenheit to Celsius
// Formula (°F - 32) × 5/9 = °C
// In use case for program Formula is °C = (°F - 32) / 1.8

/*
* Centigrade = 0° is Boiling and 100° is Freezing.
* Celsius = 0° at Freezing and 100° at Boiling.

Centigrade and Celsius both refer to the same temperature scale. Anders Celsius, a Swedish astronomer, initially proposed a temperature scale with water boiling at 0 degrees and freezing at 100 degrees.

In 1948, the General Conference on Weights and Measures (CGPM) decided to standardize new Centigrade name. Celsius is the new name instead of Centigrade. But units of measurement remains same. New measurement unite which Boiling point at 100° and Freezing at 0°.
*/

#include <stdio.h>

int main()
{
    float f, C;

    printf("Enter Fahrenheit value: ");
    scanf("%f", &f);

    C = (f - 32) / 1.8;
    printf("Celsius value is: %.2f\n", C);

    return 0;
}