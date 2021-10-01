#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - is number is positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int nombre;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nombre = n % 10;

	if (nombre > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, nombre);
	}
	else if (nombre == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, nombre);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nombre);
	}
	return (0);
}
