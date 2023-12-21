#include <stdio.h>

// If user input number like - 123, The program going to work (1+2+3). That's the about this program.

int main()
{
    int number, sum = 0, temp, remainder;
    printf("Enter any number: ");
    scanf("%d", &number);

    temp = number; // number exchange another variable

    while (temp != 0)
    {
        remainder = temp % 10; // Collect remainder/mod number from temp number
        sum = sum + remainder; // Store sum variable with sum add temp mod(%) number
        temp = temp / 10;      // Collect temp number to division number
    }

    printf("Sum of digits number is: %d\n", sum);

    return 0;
}
