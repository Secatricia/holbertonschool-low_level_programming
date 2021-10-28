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
	unsigned int i;
	unsigned int j;
	char *str;

	str = malloc(sizeof(char) * (_strlen(s1) + n) + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
		continue;
	}
	for (j = 0; j < n; j++, i++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';

	return (str);
}
