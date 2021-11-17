#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: adresse debut de la liste chainé
 * @index: nombre de nodes
 * Return: (nb_node)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int nb_node = 0;

	if (tmp == NULL)
		return (NULL);

	while (tmp != NULL && nb_node < index)
	{
		nb_node++;
		head = head->next;
	}
	return (head);
}
