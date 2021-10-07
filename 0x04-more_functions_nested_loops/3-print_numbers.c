#include "main.h"

/**
 * print_numbers - afficher les chiffres
 *
 * Return: 0 ou 1
 */

void print_numbers(void)
{
	int a = 48;
	int i = 0;

	while (i < 10)
	{
		_putchar(a);
		a++;
		i++;
	}
	_putchar('\n');
}
