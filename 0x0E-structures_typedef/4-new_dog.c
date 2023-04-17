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
    if (!name || !owner) {
        return NULL;
    }
    
    size_t name_len = strlen(name);
    size_t owner_len = strlen(owner);
    
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (!new_dog) {
        return NULL;
    }
    
    new_dog->name = malloc(name_len + 1);
    if (!new_dog->name) {
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->name, name);
    
    new_dog->owner = malloc(owner_len + 1);
    if (!new_dog->owner) {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->owner, owner);
    
    new_dog->age = age;
    
    return new_dog;
}

