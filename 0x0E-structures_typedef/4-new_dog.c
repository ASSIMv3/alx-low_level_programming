#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	int name_len = 0, owner_len = 0;
	char *name_copy, *owner_copy;

	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;

	name_copy = malloc(sizeof(char) * (name_len + 1));
	owner_copy = malloc(sizeof(char) * (owner_len + 1));

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		free(new_dog);
		return (NULL);
	}

	for (int i = 0; i < name_len; i++)
		name_copy[i] = name[i];
	name_copy[name_len] = '\0';
	for (int i = 0; i < owner_len; i++)
		owner_copy[i] = owner[i];
	owner_copy[owner_len] = '\0';

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
