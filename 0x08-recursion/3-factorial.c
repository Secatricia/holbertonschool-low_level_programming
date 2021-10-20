#include "main.h"
#include <stdio.h>

/**
 * factorial - Write a function that returns the factorial of a given number.
 * @n: variable
 * Return: (0 ou 1 ou (n * factorial(n - 1))
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
