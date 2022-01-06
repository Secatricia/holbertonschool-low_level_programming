#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - check the code
 *
 * Return: Always 0.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nb_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nb_node++;
	}
	return (nb_node);
}
