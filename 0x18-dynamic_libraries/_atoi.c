#include "main.h"
#include <stdio.h>

/**
 * _atoi - Transformer une chaine en nombre entier
 * @s: variable
 * Return: (0)
 */
int _atoi(char *s)
{
	unsigned int ch = 0;
	int i = 0;
	int nbmoin = 1;

	while ((s[i] > '9' || s[i] < '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			nbmoin *= -1;
		}
		i++;
	}
	while ((s[i] >= '0') && (s[i] <= '9'))
	{
		ch = (ch * 10) + (s[i] - 48);
		i++;
	}
	return (ch * nbmoin);
}
