#include <stdio.h>
#include "main.h"

/**
 * main - adition de multiple
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int c;
	int d = 0;

	while (d < 50)
	{
		d = d + 1;
		c = b + a;
		printf("%d\n", c);
	}
	return (0);
}
