/*
* File: initials.c
* Programmer: Zander Møysal
* Date: 16.10.2015
*
* Gets a string from user(name), then prints initials in all caps.
* 
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char name[100];
    fgets(name, 100, stdin);
    int a = strlen(name);
    for (int k = 0; k < a; k++)
    {
        if (k == 0)
        {
            printf("%c", toupper(name[k]));
        }
    
        else if (name[k] == ' ')
        {
            printf("%c", toupper(name[k + 1]));
        }
    }
    printf("\n");
}
