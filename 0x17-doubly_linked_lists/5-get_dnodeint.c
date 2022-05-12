#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: head
 * @index: index of the node
 * Return: value or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
