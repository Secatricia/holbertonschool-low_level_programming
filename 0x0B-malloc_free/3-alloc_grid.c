#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Write a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: variable
 * @height: variable
 * Return: (NULL ou v)
 */

int **alloc_grid(int width, int height)
{
	int **v;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	v = (int **)malloc(height * sizeof(int *));

	if (v == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		v[i] = (int *)malloc(width * sizeof(int));

		if (v[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(v[j]);
			}

			free(v);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			v[i][j] = 0;
		}
	}
	return (v);
}
