#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: head
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t nod = 0;
    
    while (h)
    {
        nod++;
        printf("%d\n", h->n);
        h = h->next;
    }
    return (nod);
}