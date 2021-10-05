#include <stdio.h>

/**
 * main - addition somme multiple
 *
 * Return: 0 
 */

int main(void)
{

int i = 0;
int c = 0;

while (i < 1024)
{
	if (i % 3 == 0 || i % 5 == 0)
		c += i;
	i++;
}
printf("%d\n", c);

	return (0);
}
