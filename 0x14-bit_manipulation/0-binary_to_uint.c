#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: parametre
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j = 0;

	if (b == NULL)
		return (0);

	for (i = 0; *(b + i) != '\0'; i++)
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);

		if (*(b + i) == '1')
			j += 1;

		if (*(b + i + 1) != '\0')
			j *= 2;
	}
	return (j);
}
