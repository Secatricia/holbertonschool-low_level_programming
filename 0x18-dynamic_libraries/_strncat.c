#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatener en fonction de n
 * @src: variable
 * @dest: variable
 * @n: variable
 * Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0 ; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
