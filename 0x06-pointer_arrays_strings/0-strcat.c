#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatener
 * @src: variable
 * @dest: variable
 * Return: (dest)
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
	dest[i] = src[j];
	}
	dest[i] = src[j];
	return (dest);
}
