#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: nombre
 * @index: index
 * Return: ()
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int c;

	if (n == 0)
		return (0);

	if (index <= 32)
	{
		c = (n >> index) & 1;
		return (c);
	}
	else
	{
		return (-1);
	}
}
