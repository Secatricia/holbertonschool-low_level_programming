#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht:  hash table you want to look into
 * @key: key you are looking for
 *
 * Return: the value associated with the element or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	hash_node_t *array_idx = NULL;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		return (NULL);
	}

	array_idx = ht->array[index];
	while (array_idx)
	{
		if (strcmp(array_idx->key, key) == 0)
		{
			return (array_idx->value);
		}
		array_idx = array_idx->next;
	}
	return (NULL);
}
