#include "main.h"
#include <stdio.h>

/**
 * _puts - Affiche une chaine
 *
 * @str: variable
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
