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
	int i;
	unsigned int j, strlens1, strlens2;
	char *str;
	
	strlens1 = s1 == NULL ? 0 : _strlen(s1);
	strlens2 = s2 == NULL ? 0 : _strlen(s2);

	str = malloc(sizeof(char) * (strlens1 + strlens2) + 6);
	if (str == NULL)
		return (NULL);

	for (i = 0 ; i < _strlen(s1); i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';

	return (str);
}
