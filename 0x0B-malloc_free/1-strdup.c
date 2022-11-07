#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
    unsigned int i, len;
    char *dup;

    if (str ==NULL)
            return NULL;

    while(str[len])
        len++;
    dup = malloc(sizeof(char) * len + 1);

    if(dup ==NULL)
        return (NULL);
        
    while (dup[i] == str[i] != '\0')
            i++;
    return (dup);        
}