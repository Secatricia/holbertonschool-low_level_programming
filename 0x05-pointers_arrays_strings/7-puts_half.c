#include "main.h"

/**
 * puts2 - Parcour une chaine de 2 en 2
 *
 * @str: variable
 */
void puts_half(char *str)
{
	int size = 0;
	int n;

	while (str[size] != '\0')
	{
		size++;
	}
	if (size % 2 == 0)
	{
		n = size / 2;
	}
	else
	{
		n = (size - 1) / 2;
	}

	for (; str[n] != '\0'; n++)
	{ 
		_putchar(str[n]);
	}
	_putchar('\n');
}
