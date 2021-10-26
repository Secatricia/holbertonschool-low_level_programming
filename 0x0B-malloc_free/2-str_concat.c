#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate 2 string into a new one
 * @s1: Str one
 * @s2: Str two
 * Return: NULL if probleme, pointer to new str else (succes)
 */
char *str_concat(char *s1, char *s2)
{
	char *conc = NULL;
	int length1, length2, totalLenght, i;

	if (s1 == NULL)
		length1 = 0;
	else
		length1 = _strlen(s1);

	if (s2 == NULL)
		length2 = 0;
	else
		length2 = _strlen(s2);

	totalLenght = length2 + length1;
	conc = (char *)malloc(sizeof(char) * totalLenght + 1);

	if (conc == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		*(conc + i) = *(s1 + i);
	for (i = 0; i < length2; i++)
		*(conc + length1 + i) = *(s2 + i);
	*(conc + length1 + length2) = '\0';
	return (conc);
}

/**
 * _strlen - Calculate the length of a string.
 * @s: String to manipulate.
 * Return: The length of the inputed string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
