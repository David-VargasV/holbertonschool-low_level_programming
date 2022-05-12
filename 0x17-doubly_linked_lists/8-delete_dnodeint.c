#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: head
 * @index: is the index of the node that should be deleted
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *del = *head;

if (*head == NULL)
return (-1);

while (del && i < index)
{
i++;
del = del->next;
}

if (del == NULL)
return (-1);

if (*head == del)
*head = del->next;
if (del->next)
del->next->prev = del->prev;
if (del->prev)
del->prev->next = del->next;

free(del);
return (1);
}
