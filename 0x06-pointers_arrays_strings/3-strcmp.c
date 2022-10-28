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
     
int n;

for (n = 0; s1[n] != '\0'; n++)
{
if (s1[n] > s2[n])
return (s1[n] - s2[n]);
if (s2[n] > s1[n])
return (s1[n] - s2[n]);
}
return (0);

}