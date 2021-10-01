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

	while (nombre < 57)
	{
		putchar(nombre);
        putchar(44);
        putchar(' ');
		nombre++;
	}
	putchar (57);
	return (0);
}
