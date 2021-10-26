#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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

	return (point);
}
