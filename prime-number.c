#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false; // If num is divisible by any i, it's not prime
        }
    }
    return true; // If no divisors were found, num is prime
}

int main(void)
{
    printf("Prime numbers from 1 to 100 are:\n");

    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
