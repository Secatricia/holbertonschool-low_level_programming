#include "main.h"
#include <stdio.h>

/**
 * print_number - afficher un nombre entier
 *
 *@n: variable
 */
void print_number(int n)
{
	long int num = n;

	if (num < 0)
	{
		num = -num, _putchar('-');
	}
	if (num >= 10000 && num <= 32767)
	{
		_putchar((num / 10000) + 48), _putchar(((num / 1000) % 10) + 48);
		_putchar(((num / 100) % 10) + 48), _putchar(((num / 10) % 10) + 48);
		_putchar((num % 10) + 48);
	}
	else if (num >= 1000 && n <= 9999)
	{
		_putchar((num / 1000) + 48), _putchar(((num / 100) % 10) + 48);
		_putchar(((num / 10) % 10) + 48), _putchar((num % 10) + 48);
	}
	else if (num >= 100 && num <= 999)
	{
		_putchar((num / 100) + 48), _putchar(((num / 10) % 10) + 48);
		_putchar((num % 10) + 48);
	}
	else if (num >= 10 && num <= 99)
	{
		_putchar((num / 10) + 48), _putchar((num % 10) + 48);
	}
	else if (num < 10 && num >= 0)
	{
		_putchar(num + 48);
}}
