#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Ecrire une fonction qui copie la zone mémoire.
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: (dest)
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
