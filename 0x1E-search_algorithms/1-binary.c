#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 *
 * @array: array is a pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: value is the value to search for
 *
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0;
	size_t end = size - 1;
	size_t n_size = 0;

	if (!array)
		return (-1);

	while (i <= end)
	{
		n_size = i + (end - i) / 2;

		printf("Searching in array: ");
		for (j = i; j < end; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		if (array[n_size] > value)
		{
			end = n_size - 1;
		}
		else if (array[n_size] < value)
		{
			i = n_size + 1;
		}
		else
		{
			return (n_size);
		}
	}
	return (-1);
}
