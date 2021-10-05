#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - dernier nombre de la variable
 *
 * @n: variable
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
