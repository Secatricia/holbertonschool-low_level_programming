#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - dernier nombre de la variable
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i < 24)
	{
		for (; j < 60; j++)
		{
		_putchar((i / 10) + 48);
		_putchar((i % 10) + 48);
		_putchar(58);
		_putchar((j / 10) + 48);
		_putchar((j % 10) + 48);
		_putchar('\n');
		}
		j = 0;
		i++;
	}
}
