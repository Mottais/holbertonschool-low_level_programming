#ifndef _EXISTE_DEJA_
#define _EXISTE_DEJA_

/**
 * struct dog - dog data
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 * Description: dog data
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
