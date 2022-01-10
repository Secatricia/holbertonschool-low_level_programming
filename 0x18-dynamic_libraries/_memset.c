#include "main.h"
#include <stdio.h>

/**
 * _memset - La fonction remplit les premiers n octets
 * de la zone mémoire pointée par s avec la constante byte b
 * Renvoie un pointeur vers la zone de mémoire s
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
