#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list - check the code
 * @h: parametre
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	int nb_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nb_node++;
		h = h->next;
	}
	return (nb_node);
}
