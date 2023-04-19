#include "dog.h"

/**
 * free_dog - free dogs
 * @d: struct name
 * Return: dog_t
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
