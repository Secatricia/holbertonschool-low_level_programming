#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argv: variable
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i, j, somme;

	if (argc != 3)
	{
		return (0);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		somme = i * j;
		printf("%d\n", somme);
		return (0);
	}
}
