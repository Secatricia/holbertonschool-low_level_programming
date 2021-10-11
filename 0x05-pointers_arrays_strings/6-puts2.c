#include "main.h"
#include <stdio.h>

/**
 * puts2 - Parcour une chaine de 2 en 2
 *
 * @str: variable
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
