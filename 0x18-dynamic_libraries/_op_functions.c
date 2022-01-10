#include <stdio.h>
#include "main.h"

/**
 * op_add- addition
 * @a: variable
 * @b: variable
 * Return: (a + b)
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- soustraction
 * @a: variable
 * @b: variable
 * Return: (a - b)
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: variable
 * @b: variable'
 * Return: (a * b)
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div- division
 * @a: variable
 * @b: variable
 * Return: (a / b)
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return(0);
	}
	return (a / b);
}
/**
 * op_mod - modulo
 * @a: variable
 * @b: variable
 * Return: (a % b)
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return(0);
	}
	return (a % b);
}
