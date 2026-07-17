#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void)
{
    string name=get_string("what's your name: ");
    printf("output: ");
    for(int i=0 , n=strlen(name); i< n; i++)
    {
        printf("%c",name[i]);
    }
    printf("\n%lu\n",strlen(name));
}
