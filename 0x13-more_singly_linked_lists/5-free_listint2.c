#include "lists.h"

/**
* free_listint2 - Write a function that frees a listint_t list
* @head: pointer to head of the node
* Return: value
*/

void free_listint2(listint_t **head)
{
listint_t *f;

if (head == NULL)
return;

while (*head)
{
f = (*head)->next;
free(*head);
*head = f;
}
head = NULL;
}
