#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int x= get_int("what's x ? ");
    int y= get_int("what's y ? ");
    printf("%i\n",x/y);
    // long dollars=1;
    // while(true)
    // {
    //     char c = get_char("Here's $%li. Double it and give to next person?", dollars);
    //     if(c=='y')
    //     {
    //         dollars *= 2;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
}
