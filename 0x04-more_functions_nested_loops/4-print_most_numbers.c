#include "main.h"

/**
 * print_most_numbers - afficher les chiffres sauf 2 et 4
 */

void print_most_numbers(void)
{
	int a = 48;
	int i = 0;

	while (i < 10)
	{
		if (a != 52 && a != 50)
		{
		_putchar(a);
		}
		a++;
		i++;
	}
	_putchar('\n');
}
