#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	if (p != NULL)
	{
		(*p).name = name;
		(*p).age = age;
		(*p).owner = owner;
	}
	return (p);
}
