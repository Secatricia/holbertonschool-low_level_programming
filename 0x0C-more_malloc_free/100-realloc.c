#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Write a function that reallocates
 * a memory block using malloc and free
 * @ptr: variable
 * @old_size: variable
 * @new_size: variable
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(new_ptr);
		return (NULL);
	}

	if (new_size > old_size)
		_memcpy(new_ptr, ptr, old_size);
	else
		_memcpy(new_ptr, ptr, new_size);

	free(ptr);

	return (new_ptr);
}


/**
 * _memcpy - function that copies memory area
 * @dest: memory area dest
 * @src: memory area src
 * @n: copies n bytes from memory area
 * Return: a pointer to destination (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	while (n != 0)
	{
		dest[n - 1] = src[n - 1];
		n--;
	}

	return (dest);
}
