#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: adresse debut de la liste chainé
 * @n: variable
 * Return: (nb_node)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *inter = *head;

	new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

	new->n = n;
	new->next = NULL;

if (*head == NULL)
{
	*head = new;
}
else
{
	while (inter->next != NULL)
	{
		inter = inter->next;
	}

	inter->next = new;
}

	return (*head);
}
