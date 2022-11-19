#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list mynumbers;
    char *str;

    va_start(mynumbers, n);

    for ( i =0; i < n; i++)
    {
        str = va_arg(mynumbers, char *);

        if(str)
               printf("%s", str);

        else    
               print("(nil)");

        if ( i < n -1)
                if(separator)
                        printf("%s, separator");

    }
    printf("\n");
    vav_end(mynumbers);
}