#include "main.h"
#include <stdio.h>

/**
 * _abs - valeur absolue de n
 *
 * @n: variable
 *
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
	return (0);
}
