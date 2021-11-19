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
	const char *chaine = b;

	if (b == NULL)
		return (0);

	for (i = 0; chaine[i]; i++)
	{
		;
	}
	i--;
	while (i >= 0)
	{
		if (*b != 0 + 48 && *b != 1 + 48)
			return (0);
		j += ((*b - 48) * pow(2, i));
		i--;
		b++;
	}
	return (j);
}
