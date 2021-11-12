#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at
 * the beginning of a list_t list
 * @head: pointeur vers la premiere node
 * @str: parametre à ajouter
 * Return: (head)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}

/**
* _strlen - check the length of the string
* @s: parametre
* Return: (i)
*/

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}

	return (i);
}
