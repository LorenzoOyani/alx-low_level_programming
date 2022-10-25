#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a reverse string
 *@s: A pointer to an int that will be changed
 *
 *Return: void
 */

int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

void rev_string(char *s)
{
     char  tmp;
     int a, len, len1;

     len =0;
     len1 = 0;

     while (s[len] != '\0')
     {
        len++;
     }
     len1 = len -1;

     for (a = 0; a < len / 2; a++)
     {
        tmp = s[a];
        s[a] = s[len1];
        s[len1--] =tmp;
     }


}   