#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list.
 * @h: adresse debut de la liste chainé
 * Return: (nb_node)
 */
size_t listint_len(const listint_t *h)
{
	int nb_node = 0;

	while (h != NULL)
	{
		nb_node++;
		h = h->next;
	}
	return (nb_node);
}
