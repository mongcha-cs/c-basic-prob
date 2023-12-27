#include <stdio.h>
#include <stdbool.h>

//------- With Function code ----
// Write sum of series prime number / task this after work

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

int main()
{
    int userInput;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &userInput);

    // Check if the entered number is prime
    if (isPrime(userInput))
    {
        printf("%d is a prime number.\n", userInput);
    }
    else
    {
        printf("%d is not a prime number.\n", userInput);
    }

    return 0;
}

/*
    --- Without Function code program ----

    #include <stdio.h>
#include <stdbool.h>

int main() {
    int userInput;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &userInput);

    // Check if the entered number is prime
    if (userInput <= 1) {
        printf("%d is not a prime number.\n", userInput);
    } else {
        bool isPrime = true;
        for (int i = 2; i * i <= userInput; i++) {
            if (userInput % i == 0) {
                isPrime = false; // If num is divisible by any i, it's not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d is a prime number.\n", userInput);
        } else {
            printf("%d is not a prime number.\n", userInput);
        }
    }

    return 0;
}

*/
