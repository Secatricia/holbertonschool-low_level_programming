#include "main.h"
#include <stdio.h>

/**
 * _strstr - Ecrire une fonction qui localise une sous-chaîne.
 * a string for any of a set of bytes.
 * @haystack: variable
 * @needle: variable
 * Return: (0) ou (haystack + i)
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		while (haystack[i + j] == needle[j] && needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		if (needle[j])
		{
			j = 0;
			i++;
		}
	}
	return (0);
}
