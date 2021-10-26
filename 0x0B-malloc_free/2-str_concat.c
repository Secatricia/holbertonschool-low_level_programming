#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
 * _strcat - concatene
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

/**
 * _strdup - Write a function that concatenates two strings
 * @s1: variable
 * @s2: variable
 * Return: (NULL ou )
 */
char *str_concat(char *s1, char *s2)
{
	char *conc = NULL;

	if (s2 == NULL && s1 == NULL)
	{
		return (NULL);
	}
	s1 = malloc(sizeof(char) * _strlen(s2) + 1);

	if (s2 == NULL)
	{
		return (s1);
	}
	conc = _strcat(s1, s2);

	return (conc);
}
