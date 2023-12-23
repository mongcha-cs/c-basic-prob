#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int palindromeNumber, remainder, temp, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &palindromeNumber);

    palindromeNumber = abs(palindromeNumber); // All input number going to convert positive number

    temp = palindromeNumber;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum * 10 + remainder;
        temp = temp / 10;
    }
    printf("Reverse number is: %d\n", sum);

    if (palindromeNumber == sum)
    {
        printf("This is palindrome Number");
    }
    else
    {
        printf("This is not palindrome Number!");
    }

    return 0;
}
