#include <stdio.h>

int main()
{
    int numOne, numTwo;

    printf("Enter value One: ");
    scanf("%d", &numOne);

    printf("Enter value One: ");
    scanf("%d", &numTwo);

    if (numOne > numTwo)
    {
        printf("%d is greater then %d.\n", numOne, numTwo);
    }
    else
    {
        printf("%d is greater then %d.\n", numTwo, numOne);
    }
}