
// INPUT SUM OF DIGITS REVERSE PROGRAM

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int remainder, userNum, sum = 0;

    printf("Enter your Reverse Number: ");
    scanf("%d", &userNum);

    while (userNum != 0)
    {
        remainder = userNum % 10;
        sum = sum * 10 + remainder;
        userNum /= 10;
    }

    printf("Reverse number is: %d", sum);

    return 0;
}
