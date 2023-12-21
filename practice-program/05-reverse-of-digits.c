#include <stdio.h>

int main(int argc, char const *argv[])
{
    int reverseNumber, remainder, temp, sum = 0;

    printf("Enter your Reverse Number: ");
    scanf("%d", &reverseNumber);

    temp = reverseNumber;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum * 10 + remainder;
        temp = temp / 10;
    }

    printf("Reverse number is: %d", sum);

    return 0;
}
