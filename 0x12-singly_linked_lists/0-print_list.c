#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 * Return: the number of nodes
 * if str is null, print [0] (nil);
 * you are allowed to use printf
 */



    

size_t print_list(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
}