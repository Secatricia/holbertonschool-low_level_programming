#include "main.h"
#include <stdio.h>

/**
 * rot13 - Transforme les lettres en language rot13
 * @n: variable
 * Return: (n)
 */
char *rot13(char *n)
{
	int i = 0;
	int j;
	char tabL[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char tabT[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (n[i])
	{
		for (j = 0; n[i] != tabL[j] && tabL[j]; j++)
		{
			continue;
		}
		if (tabL[j] == n[i])
		{
			n[i] = tabT[j];
		}
		i++;
	}
	return (n);
}
