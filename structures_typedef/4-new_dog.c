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
	dog_t *new_dog;

	if (name != NULL && owner != NULL)
	{

		new_dog = malloc(sizeof(dog_t));

		if (new_dog == NULL || age < 0)
		{
			free(new_dog);
			return (NULL);
		}

		new_dog->name = strdup(name);
		new_dog->owner = strdup(owner);
		new_dog->age = age;
	}
	else
		return(NULL);

	return (new_dog);
}
