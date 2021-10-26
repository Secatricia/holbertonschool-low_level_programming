#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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

	while (j <= size)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}

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
 * _strdup - Write a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: variable
 * Return: (point)
 */
char *_strdup(char *str)
{
	char *point = NULL;

	point = malloc(sizeof(char) * _strlen(str));
	_strcpy(point, str);
	if (point == NULL)
	{
		return (NULL);
	}
	return (point);
}
