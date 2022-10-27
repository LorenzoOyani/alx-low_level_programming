#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: char pointer variable
 * @s2: char pointer variable
 * Return: an integer for the exit status
 */

int  _strcmp(char *s1, char *s2)
{
    int i = 0;

while(s1[i] == s2[i])
{
    if(s1[i] == '\0' || s2[i] == '\0')
        break;
    i++;    
}
if(s1[i] == '\0' && s2[i] == '\0')
    return 0;
else
    return -1;    


}