#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth node
* of a listint_t linked list
*
* @head: pointer to head of the node
* @index: is the index of the node
* Return: value or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n;

for (n = 0; n < index; n++)
{
if (head == NULL)
return (NULL);

head = head->next;
}
return (head);
}
