#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: input name of dog
 * @age : input age of dog
 * @owner : input owner of dog
 * Return: return a pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy_dog;

	if (name != NULL && owner != NULL)
	{

	copy_dog = malloc(sizeof(dog_t));

	if (copy_dog == NULL || age < 0)
	return (NULL);

	copy_dog->name = strdup(name);
	copy_dog->owner = strdup(owner);
	copy_dog->age = age;
	}
	return (copy_dog);
}
