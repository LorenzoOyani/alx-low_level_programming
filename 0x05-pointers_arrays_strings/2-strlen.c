#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strlen -length of a string
 *@s: A pointer to an int that will be changed/updated
 *
 *Return: void that means our answer is correct
 */

int _strlen(char *s)
{
    int len;
    for (len =0; s[len] != '\0'; len++)
    {
        return (len);
    }
}