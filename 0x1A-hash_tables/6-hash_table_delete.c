#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht:  is the hash table
 * Return: Value
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int x;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		while (ht->array[x] != NULL)
		{
			tmp = ht->array[x]->next;
			free(ht->array[x]->key);
			free(ht->array[x]->value);
			free(ht->array[x]);
			ht->array[x] = tmp;
		}
		free(ht->array[x]);
	}
	free(ht->array);
	free(ht);
}
