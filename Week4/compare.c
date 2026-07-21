#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string s = get_string("what's s:");
    string t = get_string("what's t:");
    if( strcmp(s , t)==0)
    {
        printf("same");
    }
    else
    {
        printf("differ");
    }
    printf("\n");
}
