#include <stdio.h>
#include <stdlib.h>
/**
 * main - ecrire l'alphabet en minuscule et majuscule
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;
	int j = 48;

	while (i < 58)
	{
		while (j != 58)
		{
			putchar(i);
			putchar(j);
			j++;



			if (i < 56 )
			{
				putchar(44);
				putchar(' ');
			}


		}
		i++;
		j = i + 1;
	}
	putchar ('\n');
	return (0);
}
