#include <stdlib.h>
#include <stdio.h>
/**
 * main - ecrire l'alphabet en minuscule et majuscule
 *
 * Return: 0
 */
int main(void)
{
	int l = 97;

	while (l < 123)
	{
		if (l != 101 && l != 113)
		{
			putchar(l);
		}
		l++;
	}

	putchar('\n');
	return (0);
}
