
// * Palindrome Number Program. A palindromic number is a number that remains the same when it's digits are reversed. e.g 121, 333, 434 etc.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float userNum;
    int remainder, tempSwap, sum = 0;

    printf("Check Palindrome Number. Enter only positive number!\n\n");
    printf("Check Palindrome Number: ");
    scanf("%f", &userNum);

    tempSwap = abs(userNum); // All input number convert to Absolute number
    int i = tempSwap;        // This swap value work, bring only positive number

    while (i != 0)
    {
        remainder = i % 10;
        sum = sum * 10 + remainder;
        i /= 10;
    }

    // Check Palindrome number
    if (tempSwap == sum)
    {
        printf("\n%d is The Palindrome Number.\n", tempSwap);
    }
    else
    {
        printf("\n%d is not The Palindrome Number.\n", tempSwap);
    }

    return 0;
}