#include "hash_tables.h"
/**
 * key_index -  function that creates a hash table
 * @key: key
 * @size: the size of array
 * Return: adresse of array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
