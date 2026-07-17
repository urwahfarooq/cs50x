#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
         if (i == 0)
    {
        printf("%c", toupper(s[i]));
    }
        else if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
        else if(isupper(s[i]))
        {
            printf("%c",tolower(s[i]));
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
}
// {
//     // if letter is lowercase
//     if(s[i]>='a'&& s[i]<'z')
//     {
//         printf("%c",s[i]-32);
//     }
//     // if letter is uppercase
//     else if(s[i]>='A'&& s[i]<'Z')
//     {
//         printf("%c",s[i]+32);
//     }
//     else
//     {
//         printf("nothing return");
//     }

// }
//  printf("\n");
// }
