#include "main.h"
/**
 * _isdigit - majuscule ou pas
 *
 * @c: variable
 *
 * Return: 0 ou 1
 */

int _isdigit(int c)
{
	if (c < 58 && c > 471)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
