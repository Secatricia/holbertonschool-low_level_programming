#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Transforme les minuscule en majuscule
 * @n: variable
 * Return: (n)
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0' && n[i] < 123 && n[i] > 96; i++)
	{
		n[i] = n[i] - 32;
	}
	return (n);
}
