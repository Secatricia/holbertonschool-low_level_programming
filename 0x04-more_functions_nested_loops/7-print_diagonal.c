#include "main.h"

/**
 * print_diagonal - afficher une diagonale
 *
 * @n: variable
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		printf("\n");
	}

	while (i < n && n > 0)
	{
	_putchar(92);
	_putchar('\n');
	i++;
		while (j < i)
		{
		_putchar(' ');
		j++;
		}
	j = 0;
	}
}
