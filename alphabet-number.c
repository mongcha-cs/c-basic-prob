#include <stdio.h>

int main()
{
    char input;

    // Get user input
    printf("Enter a letter: ");
    scanf(" %c", &input);

    if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
    {
        if (input >= 'a' && input <= 'z')
        {
            printf("The small letter alphabet number is 26.\n");
        }
        else
        {
            printf("The capital alphabet letter number is 26.\n");
        }
    }
    else
    {
        printf("Invalid input. Please enter a letter.\n");
    }

    return 0;
}