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
listint_t *tmp, *d_node;
unsigned int x = 1;

if (*head == NULL || head == NULL)
return (-1);

tmp = *head;
if (index == 0)
{
*head = (*head)->next;
free(tmp);
}
else
{
while (x < index)
{
tmp = tmp->next;
if (tmp == NULL)
return (-1);
x++;
}
d_node = tmp;
d_node = d_node->next;
tmp->next = d_node->next;
}
return (1);
}
