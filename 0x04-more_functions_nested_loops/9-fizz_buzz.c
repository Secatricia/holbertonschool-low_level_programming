#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 1;
	int i = 0;
	printf("%d", a);
	while (i < 99)
	{
			i++;
			a++;
		printf(" ");
		if (a % 5 != 0 && a % 3 != 0)
		{
			printf("%d", a);
		}
		else if (a % 5 == 0 && a % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}


	}
	return (0);
}
