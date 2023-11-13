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
	dog_t *new_dog;

	if (name != NULL && owner != NULL)
	{
		new_dog = malloc(sizeof(dog_t));

		if (new_dog == NULL)
			return (NULL);

		new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
		new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

		if (new_dog->owner == NULL || new_dog->name == NULL)
		{
			free(new_dog->name);
			free(new_dog->owner);
			free(new_dog);
			return (NULL);
		}

		new_dog->name = strcpy(new_dog->name, name);
		new_dog->age = age;
		new_dog->owner = strcpy(new_dog->owner, owner);
	}

	return (new_dog);
}
