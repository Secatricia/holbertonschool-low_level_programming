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
		nombre++;
	}
	putchar ('\n');
	return (0);
}
