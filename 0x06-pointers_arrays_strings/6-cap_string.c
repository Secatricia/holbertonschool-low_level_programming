#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Transforme les premiere lettre minuscule en majuscule
 * @n: variable
 * Return: (n)
 */
char *cap_string(char *n)
{
	int i = 0;
	int j;
	char car[14] = " \n\t,;.!?\"(){} ";

	if (n[i] < 123 && n[i] > 96 && i == 0)
	{
		n[i] = n[i] - 32;
	}

	while (n[i] != '\0') /*tant que la chaine est pas à la fin*/
	{
		for (j = 0; n[i] != car[j] && car[j] != '\0'; j++)
		{
			continue;
		}
		if (car[j] == n[i])
		{
			i++;
			if (n[i] < 123 && n[i] > 96)
			{
				n[i] = n[i] - 32;
			}
		}
		else
			i++;
		j = 0;
	}
	return (n);
}
