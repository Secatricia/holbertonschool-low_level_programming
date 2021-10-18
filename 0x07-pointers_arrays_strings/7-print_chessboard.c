#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Write a function that prints the chessboard.
 * a string for any of a set of bytes.
 * @a: variable
 * Return: (0) ou (haystack + i)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
