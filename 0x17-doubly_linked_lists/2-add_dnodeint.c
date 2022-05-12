#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head
 * @n: value of node
 * Return: new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *d_node;

d_node = malloc(sizeof(dlistint_t));

if (d_node == NULL)
return (NULL);

d_node->n = n;
d_node->next = (*head);
d_node->prev = NULL;

if (*head != NULL)
(*head)->prev = d_node;

*head =d_node;

return (d_node);
}
