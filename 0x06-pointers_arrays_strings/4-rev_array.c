#include "main.h"
#include <stdio.h>


/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
        int tmp, i, j;
 
        for( i = 0, j = (n -1); i < j; i++)
        {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
        }

}