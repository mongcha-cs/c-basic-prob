#include <stdio.h>

int main()
{
    int remainder, startNum, endNum, temp, sum;

    printf("Check Palindrome number. Type two input value... \n");

    printf("Enter First number: ");
    scanf("%d", &startNum);

    printf("Enter Second number: ");
    scanf("%d", &endNum);
    printf("\n");

    for (int i = startNum; i <= endNum; i++)
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