#include <stdio.h>
#include <stdlib.h>
/**
 * main - ecrire l'alphabet
 *
 * Return: 0
 */
int main(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		putchar(lettre);
		lettre++;
	}
	putchar('\n');
	return (0);
}
