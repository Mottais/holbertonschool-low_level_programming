#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - unction that allocates memory using malloc
 *
 * @b: input integer
 *
 * Return: pointer whit b bytes
 */

void *malloc_checked(unsigned int b)
{
	char *Espace_memoire_allouee;

	Espace_memoire_allouee = malloc(b);

	if (Espace_memoire_allouee == NULL)
		exit(98);

	return (Espace_memoire_allouee);
}
