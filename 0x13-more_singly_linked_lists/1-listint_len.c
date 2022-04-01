#include "lists.h"

/**
* listint_len - that returns the number of elements
* in a linked listint_t list
*
* @h: item pointer
* Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t n = 0;

while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}
