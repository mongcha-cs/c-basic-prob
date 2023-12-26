#include <stdio.h>

int main(int argc, char const *argv[])
{
    int startNum, limitNum, evenNum;

    printf("Print even number.\n");
    printf("Enter First number: ");
    scanf("%d", &startNum);

    printf("Enter Last number: ");
    scanf("%d", &limitNum);
    printf("\n");

    for (int i = startNum; i <= limitNum; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is Even number\n", i);
        }
    }

    return 0;
}
