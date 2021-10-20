#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Write a function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 * @n: variable
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (test_number(n, 2));
}
/**
 * test_number - Write a function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 * @n: variable
 * @t: variable
 * Return: Always 0.
 */
int test_number(int n, int t)
{
	if (n % t == 0)
	{
		return (0);
	}
	if (t * t > n)
	{
		return (1);
	}
	return (test_number(n, t + 1));
}
