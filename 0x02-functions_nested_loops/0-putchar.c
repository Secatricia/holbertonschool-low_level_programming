#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char afficher[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(afficher[i]);
	}
		_putchar('\n');
	return (0);
}
