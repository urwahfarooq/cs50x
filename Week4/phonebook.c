#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    FILE *file =fopen("phonebook.csv", "a");
    if(file == NULL)
    {
        return 1;
    }
    // in csv always add new value and for remove previous value
    // FILE *file =fopen("phonebook.csv", "w");

    char *name = get_string("Name : ");
    char *number = get_string("Number : ");

    fprintf(file, "%s , %s\n", name , number);

    fclose(file);
}
