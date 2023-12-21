#include <stdio.h>

int main()
{
    int year;
    printf("Enter your year: ");
    scanf("%d", &year);

    // Normal way
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is Leap year.\n", year);
            }
            else
            {
                printf("%d is Not Leap year.\n", year);
            }
        }
        else
        {
            printf("%d is Leap year.\n", year);
        }
    }
    else
    {
        printf("%d is Not Leap year.\n", year);
    }

    // Advance way

    // if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    // {
    //     printf("%d is Leap year.\n", year);
    // }
    // else
    // {
    //     printf("%d is not Leap year.\n", year);
    // }

    return 0;
}