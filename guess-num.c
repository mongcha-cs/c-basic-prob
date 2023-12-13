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
    int lucky_num = rand() % 20 + 1;

    do
    {
        printf("Guess the Lucky number:(1 to 20) (%d): ", chance);
        scanf("%d", &choosen_num);

        if (lucky_num == choosen_num)
        {
            printf("Congrats! You got right number %d.\n", choosen_num);
            is_loss = false;
            break;
        }
        // Provides some Hinds user input value
        if (choosen_num < lucky_num)
        {
            printf("Type a number Bigger then this: %d\n\n", choosen_num);
        }
        else
        {
            printf("Type a number Smaller then this: %d\n\n", choosen_num);
        }

        chance--;
    } while (chance > 0);
    if (is_loss)
    {
        printf("You lost! Lucky Number was: %d\n", lucky_num);
    }

    return 0;
}
