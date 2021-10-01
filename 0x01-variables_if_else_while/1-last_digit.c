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
		printf("and is greater than 5");
	}
	else if (nombre == 0)
	{
		printf("and is 0");
	}
	else
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}
