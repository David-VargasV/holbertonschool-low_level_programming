#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: head of nodes
 * Return: value
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp = NULL;

while (head != NULL)
{
temp = head;
head = head->next;
temp->next = NULL;
free(temp);
}
}
