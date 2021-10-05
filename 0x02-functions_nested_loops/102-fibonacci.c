#include <stdio.h>

/**
 * main - addition somme multiple
 *
 * Return: 0
 */

int main(void)
{

int i = 0;
int b = 1;
int a = 1;

	printf("%d, ", b);
while (i < 25)
{
	a += b;
	printf("%d, ", a);
	b += a;
	printf("%d, ", b);
	i++;
}
printf("%d\n", b);

	return (0);
}
 