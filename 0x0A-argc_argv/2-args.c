#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: variable
 * @argv: variable
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	(void)argc;
	return (0);
}
