#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Write a function that allocates memory for an array,
 * using malloc
 * @nmemb: variable
 * @size: variable
 * Return: (NULL or a)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = (char *) malloc(nmemb * size);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		a[i] = 0;
	}

	return (a);
}
