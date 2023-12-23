#include <stdio.h>

int main()
{
    int remainder, startPalindrome, endPalindrome, temp, sum;

    printf("Check Palindrome number. Type two input value... \n");

    printf("Enter First number: ");
    scanf("%d", &startPalindrome);

    printf("Enter Second number: ");
    scanf("%d", &endPalindrome);
    printf("\n");

    // for (startPalindrome = 0; startPalindrome <= endPalindrome; startPalindrome++)
    for (int i = startPalindrome; i <= endPalindrome; i++)
    {
        temp = i;
        sum = 0;

        while (temp != 0)
        {
            remainder = temp % 10;
            sum = sum * 10 + remainder;
            temp = temp / 10;
        }

        if (i == sum)
        {
            printf("%d are Palindrome number.\n", i);
        }

        // Not Palindrome number Print
        // else
        // {
        //     printf("%d are not Palindrome number.\n", i);
        // }
    }

    return 0;
}