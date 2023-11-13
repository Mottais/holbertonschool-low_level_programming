#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
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

	if (copy_dog == NULL)
	return (NULL);

	copy_dog->name = name;
	copy_dog->owner = owner;
	copy_dog->age = age;
	}
	return (copy_dog);
}
