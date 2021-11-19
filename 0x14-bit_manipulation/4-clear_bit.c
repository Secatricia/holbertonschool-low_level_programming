#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index.
 * @n: nombre
 * @index: index
 * Return: ()
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 64)
	{
		*n &= ~(1 << index);
		return (1);
	}

	return (-1);
}
