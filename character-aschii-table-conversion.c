#include <stdio.h>

int main()
{
    char inputValue;
    printf("Check ASCHII Character to conversion: ");
    scanf("%c", &inputValue);

    printf("Character - %c, Decimal is: %d\nCharacter - %c, Hexadecimal is: %x\nCharacter - %c, Octal is: %o\nCharacter - %c, Character is: %c\n", inputValue, inputValue, inputValue, inputValue, inputValue, inputValue, inputValue, inputValue);

    return 0;
}
