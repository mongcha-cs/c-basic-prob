
// PALINDROME NUMBER PROGRAM. If Original input number and reverse input number are same then it is a PALINDROME number. e.g 121, 333, 434 etc.

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

    // Now begin Palindrome number part
    if (userNum == sum)
    {
        printf("%d is a Palindrome Number.\n", userNum);
    }
    else
    {
        printf("%d is not Palindrome Number.\n", userNum);
    }

    return 0;
}
