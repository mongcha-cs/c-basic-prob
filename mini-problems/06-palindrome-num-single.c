
// * Palindrome Number Program. A palindromic number is a number that remains the same when it's digits are reversed. e.g 121, 333, 434 etc.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int userNum, remainder, temp, sum = 0;

    printf("Check Palindrome Number: ");
    scanf("%d", &userNum);

    userNum = abs(userNum); // All input number convert to Absolute number

    temp = userNum; // Variable value switch

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum * 10 + remainder;
        temp /= 10;
    }

    // Check Palindrome number
    if (userNum == sum)
    {
        printf("\n%d is Palindrome Number.\n", userNum);
    }
    else
    {
        printf("\n%d is not Palindrome Number.\n", userNum);
    }

    return 0;
}