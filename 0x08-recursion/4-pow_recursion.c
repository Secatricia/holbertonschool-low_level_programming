#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Write a function that returns the value
 * of x raised to the power of y.
 * @x: variable
 * @y: variable
 * Return: (-1 ou 0 ou (x * _pow_recursion(x, y - 1)))
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
