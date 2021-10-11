#include "main.h"
#include <stdio.h>

/**
 * _strlen - Compte le nombre de caractere d'une chaine
 *
 * @s: variable
 *
 * Return: (i)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
        _putchar(*str);
		str++;
    }
    _putchar('\n');
}
