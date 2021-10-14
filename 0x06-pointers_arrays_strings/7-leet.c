#include "main.h"
#include <stdio.h>

/**
 * leet - Transforme les lettre a,e,o,t,l en language 1337
 * @n: variable
 * Return: (n)
 */
char *leet(char *n)
{
	int i;
	int j;
	char tabL[10] = "aeotlAEOTL";
	char tabT[10] = "4307143071";

	for (i = 0; n[i]; i++)
	{
		for (j = 0; tabL[j] != n[i] && tabL[j]; j++)
		{
			continue;
		}

		if (tabL[j] == n[i])
		{
			n[i] = tabT[j];
		}
	}
	return (n);
}
