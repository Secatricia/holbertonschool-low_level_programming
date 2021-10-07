#include "main.h"

/**
 * print_square - afficher un carré #
 *
 * @size: variable
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	while (i < size && size > 0)
	{
	i++;
		while (j < size)
		{
		_putchar(35);
		j++;
		}
	j = 0;
	_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
