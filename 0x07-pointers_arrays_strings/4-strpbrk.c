#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Write a function that searches
 * a string for any of a set of bytes.
 * @s: variable
 * @accept: variable
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
		{
			;
		}
		if (s[i] == accept[j])
		{
			return (s + i);
		}
	}
		return (0);
}
