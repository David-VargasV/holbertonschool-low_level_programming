#include "lists.h"

/**
* delete_nodeint_at_index -  function that deletes the node at
* index index of a listint_t linked list
*
* @head: reference to pointer to head node of list
* @index: is the index of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *d_node = *head;
unsigned int x;

if (d_node == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(d_node);
return (1);
}

for (x = 0; x < (index - 1); x++)
{
if (d_node->next == NULL)
return (-1);

d_node = d_node->next;
}
tmp = d_node->next;
d_node->next = tmp->next;
free(tmp);

return (1);
}
