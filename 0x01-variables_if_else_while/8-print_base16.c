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
	int nombre2 = 97;

	while (nombre < 58)
	{
		putchar(nombre);
		nombre++;
	}
	while (nombre2 < 103)
	{
		putchar(nombre2);
		nombre2++;
	}
	putchar ('\n');
	return (0);
}
