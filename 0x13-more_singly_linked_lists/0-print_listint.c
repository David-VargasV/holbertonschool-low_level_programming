#include "lists.h"

/**
* print_listint - that prints all the elements of a listint_t list
* @h: item pointer
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t p = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
p++;
}
return (p);
}
