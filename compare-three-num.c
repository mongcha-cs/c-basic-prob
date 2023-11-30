#include <stdio.h>

int main()
{
    int numOne, numTwo, numThree;

    printf("Enter value One: ");
    scanf("%d", &numOne);

    printf("Enter value Two: ");
    scanf("%d", &numTwo);

    printf("Enter value Three: ");
    scanf("%d", &numThree);

    if (numOne > numTwo && numOne > numThree)
    {
        printf("%d is greater than %d, %d.\n", numOne, numTwo, numThree);
    }
    else if (numTwo > numOne && numTwo > numThree)
    {
        printf("%d is greater than %d, %d.\n", numTwo, numOne, numThree);
    }
    else if (numThree > numOne && numThree > numTwo)
    {
        printf("%d is greater than %d, %d.\n", numThree, numOne, numTwo);
    }

    return 0;
}