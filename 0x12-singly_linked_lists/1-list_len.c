#include "lists.h"

/**
* list_len - that returns the number of elements in a linked list_t list
* @h: item pointer
* Return: the number of elements
*/

size_t list_len(const list_t *h)
{
size_t cont = 0;

while (h != NULL)
{
h = h->next;
cont++;
}
return (cont);
}
