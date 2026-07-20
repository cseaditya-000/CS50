#include <stdio.h>

int main (int argc, int argv[])
{//argc is argument count program name is always argv[0] 
    if (argc == 2)
    {
        printf("Hello");
    }
    else
    {
        printf("Err");
        return 1;
    }
}