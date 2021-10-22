#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argv: variable
 * @argc: variable
 * Return: (0)
 */
int main(int argc, char **argv)
{
	int change = 0, i = 0;
	int valeur;
	int piece[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	valeur = atoi(argv[1]);

	if (valeur > 0)
	{
		while (valeur != 0)
		{
			change += valeur / piece[i];
			valeur %= piece[i++];
		}
	}
	printf("%d\n", change);
	return (0);
}
