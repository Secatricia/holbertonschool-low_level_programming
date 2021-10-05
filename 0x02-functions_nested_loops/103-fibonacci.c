#include <stdio.h>

/**
 * main - suite de fibonacci
 *
 * Return: 0
 */


int main(void)
{
	int i;
	unsigned long int j, k, next, somme;

	j = 1;
	k = 2;
	somme = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			somme = somme + j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	printf("%lu\n", somme);

	return (0);
}