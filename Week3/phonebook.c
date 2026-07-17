#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}person;

int main(void)
{
    person people[3];

    people[0].name="kelly";
    people[0].number="030-458935";

    people[1].name="haya";
    people[1].number="030-245613";

    people[2].name="jordan";
    people[2].number="030-458921";

    string name=get_string( "Enter name : ");
    for( int i = 0; i < 3 ; i++)
    {
        if(strcmp(people[i].name ,name) == 0)
        {
            printf("found %s\n",people[i].number);
            return 0;
        }
    }
    printf("sorry that name is not available\n");
    return 1;
}
