#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Transforme les premiere lettre minuscule en majuscule
 * @n: variable
 * Return: (n)
 */
char *cap_string(char *n)
{
	int i, j;
	char car[14] = " \n\t,;.!?\"(){} ";

	for (i = 0; n[i] != '\0'; i++)
	{
		while (n[i] != car[j] && n[i] != ' ' && n[j] != '\0')
		{
			for (j = 0; n[i] != car[j] && car[j] != '\0'; j++)
			{
				continue;
			}
		}
		if (n[i++] < 123 && n[i++] > 96 && car[j] == n[i])
		{
			i++;
			n[i] = n[i] - 32;
		}
		j = 0;
	}
	return (n);
}
