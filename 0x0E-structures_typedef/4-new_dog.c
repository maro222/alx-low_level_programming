#include "dog.h"

/**
 * new_dog - cpy a struct dog variable
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j, ii, jj;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog =  malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	dog->name = malloc(sizeof(char) * (i));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
	;
	dog->owner = malloc(sizeof(char) * (j));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	ii = 0;
	jj = 0;

	for (; name[ii] != '\0'; ii++)
		dog->name[ii] = name[ii];
	for (; owner[jj] != '\0'; jj++)
		dog->owner[jj] = owner[jj];
	dog->name[ii] = '\0';
	dog->owner[jj] = '\0';
	dog->age = age;

	return (dog);
}
