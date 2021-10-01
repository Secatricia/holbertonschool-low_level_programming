#include <stdlib.h>
#include <stdio.h>
/**
 * main - ecrire l'alphabet en minuscule et majuscule
 *
 * Return: 0
 */
int main(void)
{
	int lettre = 97;

	while (lettre < 123)
	{
		putchar(lettre);
		lettre++;
	}

	putchar('\n');
	return (0);
}
