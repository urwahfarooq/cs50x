#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n = 80 ;
    int *p = &n;
    string s="HI!";

    printf("%i\n ",*p);
    printf("%p\n",p);

    printf("%p\n",s);
    printf("%p\n",&s[0]);
    printf("%p\n",&s[1]);
    printf("%p\n",&s[2]);

}
