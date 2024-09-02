/*
 ! Multi Armstrong Number program.
 * An Armstrong number of order n is a number in which each digit is raised to the power of n, and the sum equals the original number.
 */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int firstNum, lastNum;
    int temp, remainder, foundArmstrongNum = 0, count = 0;

    printf("Check Armstrong number. Enter only positive numbers!\n\n");
    printf("Enter first number: ");
    scanf("%d", &firstNum);

    printf("Enter last number: ");
    scanf("%d", &lastNum);
    printf("\n");

    // Ensure the range is handled correctly
    if (firstNum > lastNum)
    {
        int tempSwap = firstNum;
        firstNum = lastNum;
        lastNum = tempSwap;
    }

    // Check Armstrong numbers between firstNum and lastNum
    for (int i = firstNum; i <= lastNum; i++)
    {
        // Calculate the number of digits in the current number
        int n = 0;
        temp = i; // Initialize temp with the current number
        while (temp != 0)
        {
            temp /= 10;
            n++;
        }

        // Reset the value of temp and calculate the Armstrong sum
        temp = i;
        int sum = 0;
        while (temp != 0)
        {
            remainder = temp % 10;
            sum += pow(remainder, n);
            temp /= 10;
        }

        // If Armstrong number is found
        if (i == sum)
        {
            printf("%d, ", i);
            foundArmstrongNum = 1;
        }
    }

    // Check if any Armstrong number was found
    if (!foundArmstrongNum)
    {
        printf("\nThere are no Armstrong numbers found between %d to %d.\n", firstNum, lastNum);
    }
    else
    {
        printf("\nThese are the Armstrong numbers found. Between %d to %d.\n", firstNum, lastNum);
    }

    return 0;
}
