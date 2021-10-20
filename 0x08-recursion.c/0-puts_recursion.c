#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s)
	{
	_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
