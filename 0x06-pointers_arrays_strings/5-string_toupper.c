#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Converts lowercase to uppercase
 * @c: collects string in lowercase
 * Return: converted string
 */

char *string_toupper(char *s)
{
    int i; 
for (i = 0; s[i] != '\0'; i++)
{
if(s[i] > 96 && s[i] < 123)
{
s[i] -=32;    
}
}
return (s);

}