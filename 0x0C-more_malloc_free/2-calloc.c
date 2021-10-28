#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Write a function that allocates memory for an array,
 * using malloc
 * @nmemb: variable
 * @size: variable
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a = NULL;
	int i;

	if (nmemb == '0' || size == '0')
	{
		return (NULL);
	}

	a = malloc(nmemb * size + 1);

	if (a == NULL)
	{
		free(a);
		exit(98);
	}
	for (i = 0 ; a[i] != '\0'; i++)
	{
		a[i] = '0';
		continue;
	}

	return (a);
}
