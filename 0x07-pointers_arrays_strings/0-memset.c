#include "main.h"
#include <stdio.h>

/**
 * memset - La fonction _memset() remplit les premiers n octets
 * de la zone mémoire pointée par s avec la constante byte b 
 * Renvoie un pointeur vers la zone de mémoire s
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: ()
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n - 1; i++)
	{
		s[i] = b;
	}
	return (s);
}
