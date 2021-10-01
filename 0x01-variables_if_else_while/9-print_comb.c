#include <stdio.h>
#include <stdlib.h>
/**
 * main - ecrire l'alphabet en minuscule et majuscule
 *
 * Return: 0
 */
int main(void)
{
	int nombre = 48;

	while (nombre < 58)
	{
		putchar(nombre);
		if (nombre < 57)
		{
			putchar(44);
			putchar(' ');
		}
		nombre++;
	}
	putchar ('\n');
	return (0);
}
