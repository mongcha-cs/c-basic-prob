#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Multiplication table number
    int tableNum, endNum;

    printf("Enter your multiplication table number and multiplication limit number.\n");
    printf("Multiplication table number: ");
    scanf("%d", &tableNum);

    printf("Multiplication table limit number: ");
    scanf("%d", &endNum);
    printf("\n");

    for (int i = tableNum; i <= endNum; i++)
    {
        printf("%d * %d = %d\n", tableNum, i, tableNum * i);
    }

    return 0;
}
