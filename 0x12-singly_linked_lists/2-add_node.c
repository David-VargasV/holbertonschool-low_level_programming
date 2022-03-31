#include "lists.h"

/**
* add_node - function that adds a new node at the beginning of a list_t list
* @head: pointer to head of the node
* @str: string
* Return: the address of the new element or NULL
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *d_node;

d_node = (list_t *)malloc(sizeof(list_t));
if (d_node == NULL)
return (NULL);

d_node->str = strdup(str);

if (d_node->str == NULL)
{
free(d_node);
return (NULL);
}
d_node->len = strlen(d_node->str);
d_node->next = (*head);
(*head) = d_node;
return (d_node);
}
