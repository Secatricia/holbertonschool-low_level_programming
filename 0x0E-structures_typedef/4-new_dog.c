#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Nouveau chien
 * @name: variable
 * @age: variable
 * @owner: variable
 * Return: (NULL ou p)
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
