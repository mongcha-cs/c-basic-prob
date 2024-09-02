
/*
 ! Armstrong Number program.
 * An Armstrong number of order n is a number in which each digit is raised to the power of n, and the sum equals the original number.
 */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int userNum, originalValue, temp, n = 0, remainder, sum = 0;

    printf("Check Armstrong number. Enter only positive number!\n\n");
    printf("Enter your number: ");
    scanf("%d", &userNum);

    // Convert the input to an absolute integer value
    originalValue = abs(userNum);

    // Calculate the number of digits in the input number
    temp = originalValue;
    while (temp != 0)
    {
        temp /= 10;
        n++;
    }

    // Display user digits number
    printf("User Input digit is: %d\n\n", n);

    // Calculate the sum of the powers of the digits
    temp = originalValue;
    while (temp != 0)
    {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    // Check if the input number is equal to the sum of the powers of its digits
    if (sum == originalValue)
    {
        printf("%d is an Armstrong Number.\n", originalValue);
    }
    else
    {
        printf("%d is Not an Armstrong Number.\n", originalValue);
    }

    return 0;
}
