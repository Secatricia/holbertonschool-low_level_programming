#include "main.h"
#include <stdio.h>

/**
 * _strchr - Ecrire une fonction qui localise un caractère dans une chaîne.
 * @s: variable
 * @c: variable
 * Return: ()
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		else if (!(s[i]))
		{
			return (0);
		}
	}
	return (0);
}
