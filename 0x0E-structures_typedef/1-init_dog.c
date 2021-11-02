#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Description chien
 * @d: pointeur sur struct dog
 * @name: premier membre
 * @age: deuxième membre
 * @owner: troisième membre
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
