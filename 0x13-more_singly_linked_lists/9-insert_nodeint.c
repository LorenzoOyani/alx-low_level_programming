#include "lists.h"
/**
 * insert_nodeint_at_index - This function inserts a
 * new node at given position
 * @head: The head node
 * @idx: The index of the list where new node is to be added
 * @n: The integer data of the new node
 * Return: The address of the new inserted node or NULL if failed
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *temp = *head;
    unsigned int i = 0;

    listint_t *new;
    new = malloc(sizeof(listint_t));

    if(!new)
            return (NULL);
    new -> n = n;
    new -> next = NULL;

    if(idx == 0)
    {
        new -> next = temp;
        (*head) =new;
        return (new);
    }

    for(i =0; i < (idx -1); i++)
    {
        if( temp ==NULL || temp -> next ==NULL)
                return(NULL);

        temp = temp -> next;        
    }

    new -> next = temp -> next;
    temp -> next = new;
    return (new);


}