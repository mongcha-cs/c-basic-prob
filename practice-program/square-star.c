#include <stdio.h>

int main()
{
    int height, width;
    printf("Enter your measure size Height and Weight: ");
    scanf("%d %d", &height, &width);
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            printf("%d* %d$ ", i, j);
        }
        printf("\n");
    }

    return 0;
}
