#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Write a function that searches
 * a string for any of a set of bytes.
 * @s: variable
 * @accept: variable
 * Return: Always 0.
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
