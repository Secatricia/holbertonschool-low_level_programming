#include "main.h"
#include <stdio.h>

/**
 * _strspn - Ecrire une fonction qui obtient la longueur d’un préfixe.
 * @s: variable
 * @accept: variable
 * Return: (k)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0' && accept[j] != s[i]; j++)
		{
			continue;
		}
		if (accept[j] == s[i])
		{
			k += 1;
		}
		else
		{
			return (k);
		}
	}
	return (k);
}
