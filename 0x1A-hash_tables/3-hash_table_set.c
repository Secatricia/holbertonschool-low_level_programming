#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @key: key
 * @value: value
 * @ht:  is the hash table
 * Return: 0 if error or 1 if success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	hash_node_t *array_idx = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		return (0);
	}

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	array_idx = ht->array[index];
	while (array_idx)
	{
		if (strcmp(array_idx->key, key) == 0)
		{
			array_idx->value = strdup(value);
			return (1);
		}
		array_idx = array_idx->next;
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
