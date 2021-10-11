#include "main.h"
#include <stdio.h>

/**
 * swap_int - inverse les valeurs de a et b
 *
 * @a: variable
 *
 * @b: variable
 */
void swap_int(int *a, int *b)
{
	int valeur_de_a = *a;
	*a = *b;
	*b = valeur_de_a;
}
