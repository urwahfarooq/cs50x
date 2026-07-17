#include <cs50.h>
#include <stdio.h>

// function
void meow(int times)
{
    for (int i = 1; i < times; i++)
    {
        printf("meowww\n");
    }
}
int main()
{
    int n = get_int("what's n? ");
    meow(n);
}
