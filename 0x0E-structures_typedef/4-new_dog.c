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
	int i, j;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));

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
	dog->owner = malloc(sizeof(char) * (j + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	i = 0;
	j = 0;

	for (; name[i] != '\0'; i++)
		dog->name[i] = name[i];
	for (; owner[j] != '\0'; j++)
		dog->owner[j] = owner[j];
	dog->name[i] = '\0';
	dog->owner[j] = '\0';
	dog->age = age;

	return (dog);
}
