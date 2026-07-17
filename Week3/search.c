#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string words[] = { "cricket", "monopoly", "hockey", "ludo", "badminton"};

    string s =get_string("Enter any game name: ");
    for (int i = 0; i < 5 ; i++)
    {
        if(strcmp(words[i], s) ==0)
        {
            printf("found\n");

        }
    }
    printf("not found\n");
}
