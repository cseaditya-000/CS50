#include <stdio.h>

int main()
{
    int Height;
    do
    {
        printf("Height: ");
        scanf("%d",&Height);
    } while (Height <= 0);
    int count = 1;
    while(count <= Height)
    { 
        int space_count = Height - count;
        while (space_count > 0)
        {
            printf(" ");
            space_count--;
        }
        int hash_count = count;//variable issue .I was using the same count in nested while loop which caused it to reset to zero always 
        while (hash_count>0)
        {
            printf("#");
            hash_count--;
        }
        printf("  ");
        int hash_count2 = count;
        while (hash_count2>0)
        {
            printf("#");
            hash_count2--;
        }
        int space_count2 = Height - count;
        while (space_count2 > 0)
        {
            printf(" ");
            space_count2--;
        }
        printf("\n");
        count++;
    }
}