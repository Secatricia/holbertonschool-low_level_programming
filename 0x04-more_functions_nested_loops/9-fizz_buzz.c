#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 0;
	int i = 0;

	while (i < 101)
	{
		if (i % 5 != 0 && i % 3 != 0)
		{
			printf("%d ", a);
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		a++;
		i++;
	}
	return (0);
}
