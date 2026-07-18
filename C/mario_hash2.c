#include <stdio.h>

int main()
{
    int height;
    printf("height: "); scanf("%d", &height);
    for (int row = 1; row <= height ; row++)
    {
        for (int space = 1; space <= height - row ; space++)
        {
            printf(" ");
        }
        for (int hash = 1 ; hash <= row ; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}