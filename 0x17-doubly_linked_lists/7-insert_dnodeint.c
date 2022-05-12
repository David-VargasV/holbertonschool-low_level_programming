#include "lists.h"

/**
 * insert_dnodeint_at_index - that inserts a new node at a given position
 * @h: head
 * @idx: is the index of the list
 * @n: new node
 * Return: new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *t = *h, *new_node;

if (idx == 0)
return (add_dnodeint(h, n));

for (; idx != 1; idx--)
{
t = t->next;
if (t == NULL)
return (NULL);
}
if (t->next == NULL)
return (add_dnodeint_end(h, n));

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = t;
new_node->next = t->next;
t->next->prev = new_node;
t->next = new_node;

return (new_node);
}
