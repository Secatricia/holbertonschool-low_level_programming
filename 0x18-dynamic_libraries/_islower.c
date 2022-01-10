#include "main.h"

/**
 * _islower - si minuscule return 1 sinon 0
 *
 * @c: variable
 *
 * Return: 1
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
