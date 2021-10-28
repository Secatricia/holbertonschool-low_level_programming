#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Compte le nombre de caractere d'une chaine
 *
 * @s: variable
 *
 * Return: (i)
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * string_nconcat - Write a function that concatenates two strings
 *@s1: variable
 *@s2: variable
 *@n: variable
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, strlens1, strlens2;
	char *str;
	
	strlens1 = s1 == NULL ? 0 : _strlen(s1);
	strlens2 = s2 == NULL ? 0 : _strlen(s2);
	strlens2 = n >= strlens2 ? strlens2 : n;

	str = malloc(sizeof(char) * (strlens1 + strlens2) + 6);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0 ; i < strlens1; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i < strlens2; i++)
	{
		str[strlens1 + i] = s2[i];
	}
	str[strlens1 + strlens2] = '\0';

	return (str);
}
