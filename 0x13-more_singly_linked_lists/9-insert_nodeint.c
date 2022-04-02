#include "lists.h"

/**
* insert_nodeint_at_index - Write a function that inserts a
* new node at a given position.
*
* @head: reference to head of the node
* @idx: is the index of the list where the new node should be added
* @n: int
* Return: value or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *tmp = *head;
unsigned int x = 1;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;

if (idx == 0)
{
new->next = tmp;
*head = new;
return (new);
}
for (x = 0; x < (idx - 1); x++)
{
if (tmp == NULL || tmp->next == NULL)
return (NULL);

tmp = tmp->next;
}
new->next = tmp->next;
tmp->next = new;

return (new);
}
