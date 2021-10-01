#include <stdio.h>
#include <stdlib.h>
/**
 * main - ecrire l'alphabet
 *
 * Return: 0
 */
int main(void)
{
	char lettre = 'z';

	while (lettre >= 'a')
	{
		putchar(lettre);
		lettre--;
	}
	putchar('\n');
	return (0);
}
