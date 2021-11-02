#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Description chien
 * @d: pointeur sur struct dog
 * @name: premier membre
 * @age: deuxième membre
 * @owner: troisième membre
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{

		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
			printf("Owner: %s\n", d->owner);
	}
}
