#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(void)
{
    time_t t;
    srand((unsigned)time(&t));

    int choosen_num, chance = 3;
    bool is_loss = true;
    int lucky_num = rand() % 10 + 1;

    while (chance > 0)
    {
        printf("Guess the Lucky number: (%d): ", chance);
        scanf("%d", &choosen_num);

        if (lucky_num == choosen_num)
        {
            printf("Congrats! You got right number %d.\n", choosen_num);
            is_loss = false;
            break;
        }
        chance--;
    }
    if (is_loss)
    {
        printf("You have loos. Lucky Number is %d\n", lucky_num);
    }

    return 0;
}
