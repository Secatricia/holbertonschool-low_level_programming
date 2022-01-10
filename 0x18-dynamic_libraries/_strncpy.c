#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy en fonction de n
 * @src: variable
 * @dest: variable
 * @n: variable
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j]; j++)
	{
		dest[j] = src[j];
	}

	for (; j < n; j++)
	{
		dest[j] = 0;
	}

	return (dest);
}
