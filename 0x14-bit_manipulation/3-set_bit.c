#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index
 * @n: nombre
 * @index: index
 * Return: ()
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 64)
	{
		*n |= (1 << index);
		return (1);
	}

	return (-1);
}
