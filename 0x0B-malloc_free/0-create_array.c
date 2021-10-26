#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array
 * @size: variable
 * @c: variable
 * Return: (NULL ou )
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	ar = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
