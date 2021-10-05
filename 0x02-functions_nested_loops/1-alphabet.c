#include "main.h"
/**
 * print_alphabet - ecrire l'alphabet
 */
void print_alphabet(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		_putchar(lettre);
		lettre++;
	}
	_putchar('\n');
}
