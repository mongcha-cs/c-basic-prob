#include <stdio.h>

int main()
{
    int inputValue;
    printf("Enter a Decimal Number: ");
    scanf("%d", &inputValue);

    printf("Decimal - %d, Decimal is: %d\nDecimal - %d, Hexadecimal is: %x\nDecimal - %d, Octal is: %o\nDecimal - %d, Character is: %c\n", inputValue, inputValue, inputValue, inputValue, inputValue, inputValue, inputValue, inputValue);

    return 0;
}