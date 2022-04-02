#include "lists.h"

/**
* pop_listint - function that deletes the head node
* of a listint_t linked list, and returns the head node’s data (n).
*
* @head: pointer to head of the node
* Return: value or 0
*/

int pop_listint(listint_t **head)
{
listint_t *va_temp;
int p;

if (*head == NULL)
return (0);

va_temp = *head;
p = (*head)->n;
*head = (*head)->next;
free(va_temp);
return (p);
}
