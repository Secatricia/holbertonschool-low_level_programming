#include <stdlib.h>
#include <stdio.h>
/**
 * main - ecrire l'alphabet en minuscule et majuscule
 *
 * Return: 0
 */
int main(void)
{
	char lettre = 'a';

	while (lettre != 'z')
	{
		putchar(lettre);
		lettre++;
	}
	lettre = 'A';

	while (lettre != 'Z')
	{
		putchar(lettre);
		lettre++;
	}
	putchar('\n');
	return (0);
}
