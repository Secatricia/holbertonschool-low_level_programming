#include "main.h"
#include <stdio.h>

/**
 * print_number - afficher un nombre avec _putchar
 * @n: variable
 */
void print_number(int n)
{
	unsigned int nombre;

	if (n < 0)
	{
		_putchar('-');
		nombre = -n;
	}
	else
	{
		nombre = n;
	}
	if (nombre / 10)
	{
		print_number(nombre / 10);
	}
	_putchar((nombre % 10) + 48);
}
