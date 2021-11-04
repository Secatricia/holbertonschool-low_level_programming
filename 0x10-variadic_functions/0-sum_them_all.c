#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: nombre d'arguments
 * Return: (0 or a).
 */
int sum_them_all(const unsigned int n, ...)
{
	int a = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		a += va_arg(args, int);
	}
	va_end(args);
	return (a);
}
