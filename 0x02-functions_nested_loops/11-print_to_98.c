#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check the code
 *
 * @n: variable
 */
void print_to_98(int n)
{
	while (n != 98)
	{
	if (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	else if (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	}
	printf("%d \n", n);
}
