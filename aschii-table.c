
// User going to input any kind of value and it's going print ASCHII table character value serial!

#include <stdio.h>

int main()
{
    char myValue;
    printf("Enter your value: ");
    scanf("%c", &myValue);

    if (myValue >= 48 && myValue <= 57)
    {
        printf("%c is a Numeric letter.", myValue);
    }
    else if (myValue >= 65 && myValue <= 90)
    {
        printf("%c is a Capital character letter.", myValue);
    }
    else if (myValue >= 97 && myValue <= 122)
    {
        printf("%c is a Small character letter.", myValue);
    }
    else if (myValue >= 33 && myValue <= 47)
    {
        printf("%c is a Operator Sign.", myValue);
    }

    else
    {
        printf("%c is another something number.", myValue);
    }

    return 0;
}