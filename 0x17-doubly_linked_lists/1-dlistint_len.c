#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - count number of nodes
 * @h: head
 * Return: nb_node
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nb_node = 0;

	while (h != NULL)
	{
		h = h->next;
		nb_node++;
	}
	return (nb_node);
}
