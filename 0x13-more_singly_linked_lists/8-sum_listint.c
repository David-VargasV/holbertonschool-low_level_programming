#include "lists.h"

/**
* sum_listint - Write a function that returns the sum of
* all the data (n) of a listint_t linked list.
*
* @head: pointer to head of the node
* Return: value or 0
*/

int sum_listint(listint_t *head)
{
int r_sum = 0;

while (head)
{
r_sum += head->n;
head = head->next;
}
return (r_sum);
}
