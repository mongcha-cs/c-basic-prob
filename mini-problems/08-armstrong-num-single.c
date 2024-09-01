
// Armstrong Number program.
// * If user input number '153' then (1)3+(5)3+(3)3 = 153 then it's called Armstrong number. In other words, each single value 'root to the power' equal input number, then it called Armstrong number.

#include <stdio.h>
#include <stdlib.h>
int main()
{

    int remainder, temp, sum = 0;
    float userNum;

    printf("Check Armstrong number: ");
    scanf("%f", &userNum);
    printf("\n");

    int i = abs(userNum); // Input convert to Absolute number

    temp = i;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum + remainder * remainder * remainder;
        temp /= 10;
    }

    if (userNum == sum)
    {
        printf("%d is an Armstrong number.\n", i);
    }
    else
    {
        printf("%d is not an Armstrong number\n", i);
    }

    return 0;
}
