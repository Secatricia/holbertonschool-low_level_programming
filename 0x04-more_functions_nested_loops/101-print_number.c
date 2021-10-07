#include "main.h"

/**
 * print_number - afficher des nombres entiers
 *
 * @n: number to print
 */

void print_number(int n)
{

	unsigned int i = 0, j = 1;
	unsigned int number_in_n;

	if (n == 0)
		_putchar(48);
	else
	{
		if (n < 0)
			_putchar('-'), n = -n, number_in_n = n;
		while (number_in_n > 0)
		{
			number_in_n = number_in_n / 10;
			i++;
		}
		while (i > 1)
		{
			j = j * 10;
			i--;
		}
		while (j > 0)
		{
			_putchar((n / j) % 10 + 48);
			j = j / 10;
		}
	}
}
