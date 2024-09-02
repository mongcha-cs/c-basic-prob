
// Palindrome Number Program. A palindromic number is a number that remains the same when its digits are reversed. e.g 121, 333, 434 etc.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float firstNum, lastNum;
    int userNum, remainder, temp, sum;
    int foundPalindromeNum = 0; // Flag to check if a palindrome number is found

    printf("Print Palindrome Number. Only Enter Positive number!\n\n");

    printf("Enter First Number: ");
    scanf("%f", &firstNum);

    printf("Enter Last Number: ");
    scanf("%f", &lastNum);
    printf("\n");

    // All input number convert to Absolute number
    firstNum = abs(firstNum), lastNum = abs(lastNum);

    // Iterate through each number in the range
    for (int i = firstNum; i <= lastNum; i++)
    {
        temp = i; // Store the current number in temp
        sum = 0;  // Reset sum for the new number

        // Calculate the reverse of the current number
        while (temp != 0)
        {
            remainder = temp % 10;
            sum = sum * 10 + remainder;
            temp /= 10;
        }

        // Check if the original number and the reversed number are the same
        if (i == sum)
        {
            printf("%d  ", i);
            foundPalindromeNum = 1; // Set the flag to true when a palindrome is found
        }
    }
    if (!foundPalindromeNum)
    {
        printf("There are no palindrome numbers between %.f and %.f.\n", firstNum, lastNum);
    }
    else
    {
        printf("\nThese are the palindrome numbers between %.f and %.f.\n", firstNum, lastNum);
    }

    return 0;
}
