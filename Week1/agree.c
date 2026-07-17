#include<cs50.h>
#include<stdio.h>

int main(void)
{
    char c=get_char("Do you agree?");
    if(c=='j'||c='J')
    {
        printf("agree\n");
    }
    else
    {
        printf("not agree\n");
    }
}
