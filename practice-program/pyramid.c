
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, count;
    printf("Enter your ratio number: ");
    scanf("%d", &count);

    // Half Pyramid
    for (i = 0; i < count; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    // printf("\n");

    // Full Pyramid
    for (i = 0; i < count; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            printf(" ");
        }
        for (j = 0; j < (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
