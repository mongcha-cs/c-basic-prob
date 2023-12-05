#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int picked_num, given_num;
    time_t t;

    srand((unsigned)time(&t));
    picked_num = rand() % 10 + 1;

    printf("Enter number: ");
    scanf("%d", &given_num);

    if (given_num == picked_num)
    {
        printf("Congrats! You enter right number.\n");
    }
    else
    {
        printf("You wrong! Picked number was - %d. Try again!\n", picked_num);
    }

    return 0;
}
