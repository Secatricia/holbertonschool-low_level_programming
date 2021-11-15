#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the
 * elements of a listint_t list.
 * @h: adresse debut de la liste chainé
 * Return: (nb_node)
 */
size_t print_listint(const listint_t *h)
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
