#include "main.h"
#include <stdio.h>

/**
 * main - trouver le plus grand facteur
 *
 *Return: 0
 */
int main(void)
{
	long int a = 612852475143;
	long int i = 2;

	while (a > 1)
	{
		if (a % i == 0)
		{
			a = a / i;
		}
		else
		{
			i++;
		}
	}
	printf("%ld", i);
	printf("\n");
	return (0);
}
