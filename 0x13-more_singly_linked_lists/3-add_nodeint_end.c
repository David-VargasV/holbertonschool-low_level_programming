#include "lists.h"

/**
* add_nodeint_end - function that adds a new node
* at the end of a listint_t list
*
* @head: pointer to head of the node
* @n: int
* Return: the address of the new element or NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *adno;
listint_t *p;

adno = malloc(sizeof(listint_t));
if (adno == NULL)
return (NULL);

adno->n = n;
adno->next = NULL;

if (*head == NULL)
*head = adno;

else
{
p = *head;
{
while (p->next != NULL)
p = p->next;
p->next = adno;
}
}
return (*head);
}
