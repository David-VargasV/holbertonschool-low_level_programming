#include "lists.h"

/**
* free_listint - function that frees a listint_t list
* @head: pointer
* Return: value
*/

void free_listint(listint_t *head)
{
listint_t *p;

while (head)
{
p = head;
head = head->next;
free(p);
}
}
