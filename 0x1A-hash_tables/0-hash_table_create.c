#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: the size of array
 * Return: adresse of array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int a = 0; /*Initialise value*/
	hash_table_t *hash = malloc(sizeof(hash_table_t));
	/*Add memory for struc*/

	if (hash == NULL)
	{
		return (NULL);
	}

	if (a < size)
	{
		(*hash).size = size;
	}

	hash->array = malloc(sizeof(hash_table_t *) * size);
	if (hash->array == NULL)
	{
		return (NULL);
	}

	while (a < size)
	{
		hash->array[a] = NULL;
		a++;
	}
	return (hash);
}
