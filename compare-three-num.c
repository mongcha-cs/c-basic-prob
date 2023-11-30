#include <stdio.h>

int main()
{
    int num_one, num_two, num_three;

    printf("Enter value One: ");
    scanf("%d", &num_one);

    printf("Enter value Two: ");
    scanf("%d", &num_two);

    printf("Enter value Three: ");
    scanf("%d", &num_three);

    if (num_one > num_two && num_one > num_three)
    {
        printf("%d is greater than %d, %d.\n", num_one, num_two, num_three);
    }
    else if (num_two > num_one && num_two > num_three)
    {
        printf("%d is greater than %d, %d.\n", num_two, num_one, num_three);
    }
    else if (num_three > num_one && num_three > num_two)
    {
        printf("%d is greater than %d, %d.\n", num_three, num_one, num_two);
    }

    return 0;
}