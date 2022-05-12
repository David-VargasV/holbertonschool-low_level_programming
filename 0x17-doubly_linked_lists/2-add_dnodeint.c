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

d_node = (dlistint_t *)malloc(sizeof(dlistint_t));

if (d_node == NULL)
return (NULL);

d_node->n = strdup(n);

if (d_node->n == NULL)
{
free(d_node);
return (NULL);
}
d_node->prev = strlen(d_node->n);
d_node->next = (*head);
(*head) = d_node;
return (d_node);
}
