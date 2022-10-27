#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
* *cap_string - Capitalizes all words of a string
*@c: string to change
*Return: char changed
*/

char *cap_string(char *s)
{
    int i;
    int count;
    int x = strlen(s);
    
    for ( i =0; i < x; i++)
    {
        if(isspace(s[i]))
            count = 0;
        if(isalpha(s[i]) && !isspace(s[i]))
            s[i] = toupper(s[i]);
            count =1;    
    }
    return s;
}  