#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: adresse debut de la liste chainé
 * Return: (nb_node)
 */
void free_listint(listint_t *head)
{
	listint_t *inter;

	while (head != NULL)
	{
		inter = head;
		head = head->next;
		free(inter);
	}
}
