#include <stdio.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: nombre d'elements de argv
 * @argv: variable
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	char *s = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (s[0] != '+' && s[0] != '-' && s[0] != '/' && s[0] != '*' && s[0] != '*')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
