#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: just it
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

