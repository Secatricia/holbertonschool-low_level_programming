#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copier coller
 * @src: variable
 * @dest: variable
 * Return: (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int size = 0;
	int j = 0;

	while (src[size] != '\0')
	{
		size++;
	}

	while (j < size)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
