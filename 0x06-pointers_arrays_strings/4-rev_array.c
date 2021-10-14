#include "main.h"
#include <stdio.h>

/**
 * reverse_array - inverse un tableau d'entier
 * @a: variable
 * @n: variable
 */
void reverse_array(int *a, int n)
{
	int j;
	int valeur_a;

	n = n - 1;

	for (j = 0; j <= n - 1 / 2; j++, n--)
	{
		valeur_a = a[j];
		a[j] = a[n];
		a[n] = valeur_a;
	}
}
