#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: adresse debut de la liste chainé
 */
void free_listint2(listint_t **head)
{
	listint_t *inter;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		inter = (*head);
		(*head) = (*head)->next;
		free(inter);
	}
	head = NULL;
}
