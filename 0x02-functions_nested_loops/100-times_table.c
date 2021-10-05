#include "main.h"

/**
 * print_times_table - table de multiplication en fonction de n
 *
 * @n: variable
 */
void print_times_table(int n)
{
		int j, i, k;
	if (n > 0 && n < 15)
	{
	for (i = 0; i <= n; i++)
	{
		_putchar(48);
		for (j = 1; j <= n; j++)
		{
			_putchar(44);
			_putchar(32);
			k = i * j;
			if (k <= 9)
			{
				_putchar(32), _putchar(32), _putchar((k % 10) + 48);
			}
			else if (k < 100)
			{
				_putchar(32), _putchar((k / 10) + 48), _putchar((k % 10) + 48);
			}
			else if (k >= 100)
			{
				_putchar((k / 100) + 48);
				_putchar(((k / 10) % 10) + 48);
				_putchar((k % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
}
