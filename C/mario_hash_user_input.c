#include <stdio.h>

int main()
{
    int height;
    printf("height: "); scanf("%d", &height);
    for (int row = 1; row <= height ; row++)
    {
        for (int column = 1 ; column <= row ; column++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}