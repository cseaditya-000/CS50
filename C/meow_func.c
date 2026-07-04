#include<stdio.h>
#include<cs50.h>

void meow(int times);

int main()
{
    n = get_integer("Enter n: ");
    meow(n);
}


void meow(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("Meow\n");
    }
}