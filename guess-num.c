#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(void)
{
    time_t t;
    srand((unsigned)time(&t));

    int choosen_num;
    int luck_num = rand() % 5 + 1;

    while (true)
    {
        printf("Guess the Lucky number: ");
        scanf("%d", &choosen_num);

        if (luck_num == choosen_num)
        {
            printf("Congrats! You got right number %d.\n", choosen_num);
            break;
        }
    }

    return 0;
}
