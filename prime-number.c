#include <stdio.h>
#include <stdbool.h>

// Normal ways
int main(int argc, char const *argv[])
{
    int num, i, count = 0;
    printf("Enter your number: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
        if (num / i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("%d is Prime number", i);
    }
    else
    {
        printf("%d is Not prime number\n", i);
    }

    return 0;
}

// Function to check if a number is prime
// bool isPrime(int num)
// {
//     if (num <= 1)
//     {
//         return false; // 0 and 1 are not prime
//     }
//     for (int i = 2; i * i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             return false; // If num is divisible by any i, it's not prime
//         }
//     }
//     return true; // If no divisors were found, num is prime
// }

// int main(void)
// {
//     printf("Prime numbers from 1 to 100 are:\n");

//     for (int i = 1; i <= 100; i++)
//     {
//         if (isPrime(i))
//         {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }

// Easy ways to print users input and find prime number
/*

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int start, end;

    // Get user input for the range
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers from %d to %d are:\n", start, end);

    for (int i = start; i <= end; i++)
    {
        bool isPrime = true;

        // Check if i is less than or equal to 1 (0 and 1 are not prime)
        if (i <= 1)
        {
            isPrime = false;
        }
        else
        {
            // Check if i is divisible by any number from 2 to the square root of i
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        // If isPrime is true, i is a prime number, so print it
        if (isPrime)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
*/
