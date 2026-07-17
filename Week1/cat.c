#include<stdio.h>

int main(void)
{
    printf("while loop\n");

    int i=1;
    while(i<=5)
    {
        printf("(%d) meowwwww\n",i);
        i++;
    }

    printf("for loop\n");
    for(int x=3;x>0;x--)
    {
        printf("(%d) cat , ",x);
    }
    printf("\n");

    printf("do while loop\n");
    int j=1;
    do{

        printf("(%d) meoww\n",j);
        j++;
    }
    while(j<3);
}
