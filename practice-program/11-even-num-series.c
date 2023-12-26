#include <stdio.h>

int main(int argc, char const *argv[])
{
    int startNum, limitNum;

    printf("Check Even number. And print Even number series..\n");

    // Get user input for startNum
    printf("Enter Start number: ");
    if (scanf("%d", &startNum) != 1)
    {
        printf("Invalid input for Start number. Please enter an integer.\n");
        return 1; // Exit with an error code
    }

    // Get user input for limitNum
    printf("Enter Limit number: ");
    if (scanf("%d", &limitNum) != 1)
    {
        printf("Invalid input for Limit number. Please enter an integer.\n");
        return 1; // Exit with an error code
    }

    printf("\n");

    // Check and print Even numbers within the specified range
    for (int i = startNum; i <= limitNum; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is an Even number\n", i);
        }
    }

    return 0;
}
