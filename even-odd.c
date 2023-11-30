#include <stdio.h>

int main()
{
    long long int myNum;
    // myNum = 9876543456789;
    // myNum = 98765434567898765;
    printf("Enter the value: ");
    scanf("%lld", &myNum);

    if (myNum % 2 == 0)
    {
        printf("%lld is Even number.\n", myNum);
    }
    else
    {
        printf("%lld is Odd number.\n", myNum);
    }

    return 0;
}