#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: head
 * Return: nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t nod = 0;

while (h)
{
nod++;
h = h->next;
}
return (nod);
}
