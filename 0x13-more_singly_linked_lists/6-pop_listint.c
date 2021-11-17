#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: adresse debut de la liste chainé
 * Return: (nb_node)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int valeurn;

	tmp = (*head);
	(*head) = tmp-> next;

	valeurn = tmp->n;

	free(tmp);
	return (valeurn);

}
