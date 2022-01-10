#include "main.h"
/**
 * _isalpha - si lettre return 1 sinon 0
 *
 * @c: variable
 *
 * Return: 1
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
