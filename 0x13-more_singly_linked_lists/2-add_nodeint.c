#include "lists.h"

/**
* add_nodeint - that adds a new node at the beginning
* @head: pointer to head of the node
* @n: int
* Return: the address of the new element or NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *adno;
adno = malloc(sizeof(listint_t));
if (adno == NULL)
return (NULL);

adno->n = n;
adno->next = *head;
*head = adno;

return (adno);
}
