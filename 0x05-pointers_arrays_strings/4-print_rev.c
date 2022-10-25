#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse order
 *@s: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void print_rev(char s[])
{

int length = strlen(s);

int i;

for (i = length -1; i >= 0; i--)
{
    _putchar(s[i]);
}
    _putchar('\n');
}