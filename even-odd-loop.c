#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, raseNumber;
    printf("Enter your whole number: ");
    scanf("%d", &raseNumber);

    for (i = 0; i <= raseNumber; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is Even number\n", i);
        }
        else
        {
            printf("%d is Odd number\n", i);
        }
    }

    return 0;
}
