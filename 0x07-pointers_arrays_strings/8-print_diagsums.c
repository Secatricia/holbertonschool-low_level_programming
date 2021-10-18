#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Write a function that prints the chessboard.
 * a string for any of a set of bytes.
 * @a: variable
 */
void print_diagsums(int *a, int size)
{
	int i;
	int somme1;
	int somme2;

	for (i = 0; i < size; i++)
	{
		somme1 = somme1 + (*((a) + (size * i) + i));
		somme2 = somme2 + (*((a) + (size * i) - (i +1) + size));
	}
	printf("%d, %d\n", somme1, somme2);
}
