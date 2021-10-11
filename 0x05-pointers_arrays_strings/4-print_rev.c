#include "main.h"
#include <stdio.h>

/**
 * print_rev - Affiche une chaine à l'envers
 *
 * @s: variable
 */
void print_rev(char *s)
{
	int i = 0;
	int j = i;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	s--;
	while (j < i)
	{
		_putchar(*s);
		s--;
		j++;
	}
	_putchar('\n');
}
