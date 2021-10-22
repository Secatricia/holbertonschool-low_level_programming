#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argv: variable
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int j = 0, somme = 0;
	int i = 1;

	while (i < argc)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		somme += atoi(argv[i]);
		i++;
	}
	printf("%d\n", somme);

	return (0);
}