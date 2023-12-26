#include <stdio.h>

int main(int argc, char const *argv[])
{
    int startNum, limitNum;

    printf("Check Odd number.\n");
    printf("Enter Start number: ");
    scanf("%d", &startNum);

    printf("Enter Limit number: ");
    scanf("%d", &limitNum);
    printf("\n");

    for (int i = startNum; i <= limitNum; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d is Odd number\n", i);
        }
    }

    return 0;
}
