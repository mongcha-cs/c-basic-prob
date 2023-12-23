#include <stdio.h>

int main()
{
    int remainder, starNum, endNum, temp, sum;

    printf("Check Armstrong number. Type two input value... \n");
    printf("Enter First value: ");
    scanf("%d", &starNum);

    printf("Enter Second value: ");
    scanf("%d", &endNum);
    printf("\n");

    for (int i = starNum; i < endNum; i++)
    {
        temp = i;
        sum = 0;

        while (temp != 0)
        {
            remainder = temp % 10;
            sum = sum + remainder * remainder * remainder;
            temp = temp / 10;
        }

        if (i == sum)
        {
            printf("%d are Armstrong number\n", i);
        }
    }

    return 0;
}