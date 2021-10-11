#include "main.h"
#include <stdio.h>

/**
 * rev_string - met une chaine à l'envers
 *
 * @s: variable
 */
void rev_string(char *s)
{
	int size = 0;
	int j = 0;
	int valeur_de_j;

	while (s[size] != '\0')
	{
		size++;
	}

	while (j < size)
	{
		valeur_de_j = s[j];
		s[j] = s[size - 1];
		s[size - 1] = valeur_de_j;

		size--;
		j++;
	}
}
