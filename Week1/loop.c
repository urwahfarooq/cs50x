#include<cs50.h>
#include<stdio.h>

int main(void)
{
    // int n=get_int("what is n?");
    // while(n<0)
    // {
    //     n=get_int("what is n?");

    // }
    int n;
    while (true)
    {
        n=get_int("what's n?  ");
        if(n<0)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("(%d) ",i);
        printf("helloooo\n");
    }
}
