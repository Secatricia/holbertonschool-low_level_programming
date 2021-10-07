#include "main.h"

/**
 * print_line - afficher une ligne
 *
 * @n: variable
 *
 * Return: 0
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
	_putchar(95);
	i++;
	}
	_putchar('\n');
}
