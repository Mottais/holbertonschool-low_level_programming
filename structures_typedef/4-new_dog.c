#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a new file for dog with name, age and owner
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of a dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy_dog;

	if (name != NULL && owner != NULL)
	{
		copy_dog = malloc(sizeof(dog_t));

		if (copy_dog == NULL)
			return (NULL);

		copy_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
		copy_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

		if (copy_dog->owner == NULL || copy_dog->name == NULL)
		{
			free(copy_dog->name);
			free(copy_dog->owner);
			free(copy_dog);
			return (NULL);
		}

		copy_dog->name = strcpy(copy_dog->name, name);
		copy_dog->age = age;
		copy_dog->owner = strcpy(copy_dog->owner, owner);
	}

	return (copy_dog);
}
