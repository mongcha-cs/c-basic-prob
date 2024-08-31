
// Sum of Input Digits program

#include <stdio.h>

int main()
{
    int userNum, sum = 0, temp, remainder;
    printf("Enter your number: ");
    scanf("%d", &userNum);

    while (userNum != 0)
    {
        remainder = userNum % 10;
        sum += remainder;
        userNum /= 10;
    }

    printf("The Sum of Digit is: %d\n", sum);

    return 0;
}
