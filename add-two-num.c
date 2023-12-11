#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    char ch = 'c';

    while (ch != 'q')
    {
        printf("Enter two value: ");
        scanf("%d %d", &a, &b);
        printf("Result is %d\n", a + b);

        printf("Type c to run again. Type q to Quit: ");
        scanf(" %c", &ch);
    }

    return 0;
}
