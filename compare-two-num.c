#include <stdio.h>

int main()
{
    int num_one, num_two;

    printf("Enter value One: ");
    scanf("%d", &num_one);

    printf("Enter value Two: ");
    scanf("%d", &num_two);

    if (num_one > num_two)
    {
        printf("%d is greater than %d.\n", num_one, num_two);
    }
    else
    {
        printf("%d is greater than %d.\n", num_two, num_one);
    }

    return 0;
}