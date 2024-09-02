
/*
 ! Multiple Palindrome Number Program.
 * * A palindromic number is a number that remains the same when its digits are reversed. e.g 121, 333, 434 etc.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int firstNum, lastNum;
    int remainder, temp, reversedNum;
    int foundPalindromeNum = 0; // Flag to check if a palindrome number is found

    printf("Check Palindrome Number. Enter only positive numbers!\n\n");

    // Get input for the first and last numbers
    printf("Enter the first number: ");
    scanf("%d", &firstNum);

    printf("Enter the last number: ");
    scanf("%d", &lastNum);
    printf("\n");

    // Convert input numbers to absolute values
    firstNum = abs(firstNum);
    lastNum = abs(lastNum);

    // Ensure that firstNum is less than or equal to lastNum
    if (firstNum > lastNum)
    {
        int tempSwap = firstNum;
        firstNum = lastNum;
        lastNum = tempSwap;
    }

    // Iterate through each number in the range
    for (int i = firstNum; i <= lastNum; i++)
    {
        temp = i;        // Store the current number in temp
        reversedNum = 0; // Reset reversedNum for the new number

        // Calculate the reverse of the current number
        while (temp != 0)
        {
            remainder = temp % 10;
            reversedNum = reversedNum * 10 + remainder;
            temp /= 10;
        }

        // Check if the original number and the reversed number are the same
        if (i == reversedNum)
        {
            printf("%d, ", i);
            foundPalindromeNum = 1; // Set the flag to true when a palindrome is found
        }
    }

    // If no palindrome numbers are found in the range
    if (!foundPalindromeNum)
    {
        printf("There are no palindrome numbers found. Between %d to %d.\n", firstNum, lastNum);
    }
    else
    {
        printf("\nThese are the palindrome numbers found. Between %d to %d.\n", firstNum, lastNum);
    }

    return 0;
}
