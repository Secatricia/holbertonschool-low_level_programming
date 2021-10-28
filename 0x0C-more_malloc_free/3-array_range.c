#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Write a function that creates an array of integers
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *a = NULL;
	int i;
	int j = max - min;

	a = malloc(sizeof(int) * j + 1);

	if (a == NULL)
	{
		free(a);
		return(NULL);
	}
	if (min > max)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
	{
		a[i] = min;
	}

	return (a);
}
