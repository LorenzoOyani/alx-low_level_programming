#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first node in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i =0;

    listint_t *copy = *head;
    listint_t *temp;

    unsigned int i=0;

    if(!*head)
            return(-1);

    if(index == 0)
    {
        *head = (*head) ->next;
        free(copy);
        return (1);
    }        

    for (i = 0;  i < (index -1); i++)
    {
        if(copy == NULL ||copy -> next == NULL)
        {
            return (-1);
        }
        copy = copy -> next;


    }


    temp = copy -> next;
    copy -> next = temp ->next;
    free(temp);

    return (1);

            
}