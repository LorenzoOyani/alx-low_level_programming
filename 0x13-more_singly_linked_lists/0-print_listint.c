#include "list.h"


/**
 * write a function that prints all the elements of a 
 * @param: listint_t
 * Return: the number of nodes
 * format: see examples
 * main: check the code
 * Return: Always return 0
*/

size_t print_listint(const listint_t *h)
{
    size_t count  = 0;

    while(h)
    {
        count++;
        printf("%d\n", h->n);
        h = h-> next;
    }
    

    return(count);

}