#include "main.h"
/**
 * print_alphabet_x10 - ecrire l'alphabet
 */
void print_alphabet_x10(void)
{
	char lettre = 'a';
	int i = 0;

	while (i < 10)
	{
		while (lettre <= 'z')
		{
			_putchar(lettre);
			lettre++;
		}
	_putchar('\n');
	lettre = 'a';
	i++;
	}
}
