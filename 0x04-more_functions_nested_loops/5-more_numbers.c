#include "main.h"

/**
 * more_numbers - afficher les chiffres jusqu'a 14
 */

void more_numbers(void)
{
	int a = 0;
	int i = 0;
	int j = 0;

	while (j < 10)
	{
	while (i < 15)
	{
		if (i > 9)
		{
		_putchar((a / 10) + 48);
		}
		_putchar((a % 10) + 48);
		a++;
		i++;
	}
	i = 0;
	a = 0;
	_putchar('\n');
	j += 1;
	}
}
