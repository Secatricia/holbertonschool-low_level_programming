#include "main.h"
/**
 * _isupper - majuscule ou pas
 *
 * @c: variable
 *
 * Return: 0 ou 1
 */

int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
