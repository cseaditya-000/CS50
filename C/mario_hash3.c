#include <stdio.h>

void hash(int);

int main(void)
{
    int height;
    printf("height: "); scanf("%d", &height);
    for (int row = 1; row <= height ; row++)
    {
        for (int space = 1; space <= height - row ; space++)
        {
            printf(" ");
        }
        hash(row);
        printf("  ");
        hash(row);
        printf("\n");
    }
    return 0;
}

void hash(int row)
{
    for (int hash = 1 ; hash <= row ; hash++)
    {
        printf("#");
    }
}