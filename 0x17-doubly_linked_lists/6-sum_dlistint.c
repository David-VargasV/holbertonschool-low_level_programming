#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data
 * @head: head
 * Return: Value or 0
 */

int sum_dlistint(dlistint_t *head)
{
int add = 0;

while (head)
{
add += head->n;
head = head->next;
}
return (add);
}
