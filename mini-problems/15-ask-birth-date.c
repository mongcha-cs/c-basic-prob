#include <stdio.h>

int main()
{
    int myBirthDate[4] = {0, 28, 05, 2001};
    int choice;

    do
    {
        printf("Enter 1 to see the Date, 2 to see the Month, 3 to see the Year: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Date is %d\n", myBirthDate[1]);
        }
        else if (choice == 2)
        {
            printf("Month is %d\n", myBirthDate[2]);
        }
        else if (choice == 3)
        {
            printf("Year is %d\n", myBirthDate[3]);
        }
        else
        {
            printf("Invalid input! Please enter 1, 2, or 3.\n");
        }
    } while (choice < 1 || choice > 3);

    return 0;
}