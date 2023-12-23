#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int palindromeNumber, remainder, temp, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &palindromeNumber);

    palindromeNumber = abs(palindromeNumber); // All input number convert to positive number

    temp = palindromeNumber;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum * 10 + remainder;
        temp = temp / 10;
    }

    // Now begin Palindrome number part
    if (palindromeNumber == sum)
    {
        printf("%d is a Palindrome Number.\n", sum);
    }
    else
    {
        printf("%d is not Palindrome Number.\n", sum);
    }

    return 0;
}
