#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * list_len - check the code
 * @h: parametre
 * Return: nb_node
 */
size_t list_len(const list_t *h)
{
	int nb_node = 0;

	while (h != NULL)
	{
		nb_node++;
		h = h->next;
	}
	return (nb_node);
}
