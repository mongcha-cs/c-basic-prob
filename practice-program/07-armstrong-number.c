#include <stdio.h>

int main()
{

    int armstrongNumber, remainder, temp, sum = 0;

    printf("Check armstrong number: ");
    scanf("%d", &armstrongNumber);

    temp = armstrongNumber;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum + remainder * remainder * remainder;
        temp = temp / 10;
    }

    if (armstrongNumber == sum)
    {
        printf("%d is a Armstrong number.\n", armstrongNumber);
    }
    else
    {
        printf("%d is not a Armstrong number\n", armstrongNumber);
    }

    return 0;
}
