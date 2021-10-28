#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc
 *@b: variable
 * Return: (a)
 */
void *malloc_checked(unsigned int b)
{
	int *a = NULL;

	a = malloc(b);

	if (a == NULL)
	{
		free(a);
		exit(98);
	}
	return (a);
}
