#include "main.h"

/**
 * print_triangle - faire des figures
 *
 *@size: variable
 */
void print_triangle(int size)
{
	int i = 1;
	int j;

	while (i <= size)
	{
		j = 0;

		while (j <= size - i)
		{
			_putchar(' ');
			j++;
		}
		while (j <= size)
		{
			_putchar('#');
			j++;
		}
	_putchar('\n');
	i++;
	}
	if (size == 0)
	{
		_putchar('\n');
	}
}
