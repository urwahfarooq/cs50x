#include<stdio.h>
#include<cs50.h>
int main(int argc , string argv[])

{
    if (argc == 4)
    {
        for (int i = 0; i < argc; i++)
        {
             printf("%s.", argv[i]);
        }
        printf("\n");
    }
    else
    {
        printf("hello,world\n");
    }
}
