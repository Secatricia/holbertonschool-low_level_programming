#include "main.h"
#include <stdio.h>


/**
 * _sqrt_recursion - Write a function
 * that returns the natural square root of a number.
 * @n: variable
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);

	return (_division(0, n));
}
/**
 * _division -  returns the natural square root of a number
 * @n: variable
 * @r: variable
 * Return: '(-1 ou (_division(r + 1, n))
 */
int _division(int r, int n)
{
	if (r > n)
	{
		return (-1);
	}
	if (r * r == n)
		return (r);
	return (_division(r + 1, n));
}
