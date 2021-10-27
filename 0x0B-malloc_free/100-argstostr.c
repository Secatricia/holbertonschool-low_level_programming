#include <stdlib.h>
#include "main.h"

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
 * argstostr - function that concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 * Return: the string concatenates
 */
char	*argstostr(int ac, char **av)
{
	char	*args;
	int		i = 0, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		len += _strlen(av[i]) + 1;
		i++;
	}

	len += 1;
	args = malloc(sizeof(char) * len);
	if (!args)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			args[k++] = av[i][j++];
		args[k++] = '\n';
		i++;
	}
	args[k] = '\0';
	return (args);
}
