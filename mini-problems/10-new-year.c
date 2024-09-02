#include <stdio.h>

int main()
{
    int newYear, startNum, endNum, i;

    printf("Check which year is come to new year!\n");

    printf("Enter the new year coming ahead: ");
    scanf("%d", &newYear);

    printf("Enter the Starting number: ");
    scanf("%d", &startNum);

    printf("Enter the Ending number: ");
    scanf("%d", &endNum);
    printf("\n");

    i = startNum; // shift another variables

    while (i <= endNum)
    {
        if (i == newYear)
        {
            printf("Welcome to new %d year. Happy new year to all!\n", newYear);
            break; // Exit the loop once i is founds
        }
        i++;
    }

    // Add this latter
    if (i < newYear)
    {
        printf("The New year is not found! Type the End_Number bigger than new year number.\n");
    }
    else if (i > newYear)
    {
        printf("The new year is not found! Type the Starting_Number smaller than Starting number.\n");
    }

    return 0;
}