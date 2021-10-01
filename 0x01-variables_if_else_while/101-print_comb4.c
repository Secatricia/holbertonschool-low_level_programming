#include <stdio.h>
#include <stdlib.h>
/**
 * main - ecrire les nombres avec 3 combinaison de chiffre differente
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;
	int j = 49;
	int k = 50;

	while (i < 56)
	{
		while (j < 57)
		{
			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				k++;
				if (i < 55)
				{
					putchar(44);
					putchar(' ');
				}
			}

			k = j + 1;
			j++;
		}
		i++;
		j = i + 1;

	}
	putchar ('\n');
	return (0);
}
