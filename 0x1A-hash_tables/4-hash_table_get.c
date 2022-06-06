#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht:  is the hash table you want to look into
 * @key:  is the key you are looking for
 * Return: Value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	{
		index = key_index((const unsigned char *)key, ht->size);
		tmp = ht->array[index];

		if (ht->array[index])
		{
			if (tmp)
			{
				if (strcmp(tmp->key, (char *)key) == 0)
					return (tmp->value);
				tmp = tmp->next;
			}
		}
	}
	return (NULL);
}
