#include "main.h"
/**
 * print_sign - imprime le signe du nombre
 *
 * @n: variable
 *
 * Return: 0, 1 ou -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
