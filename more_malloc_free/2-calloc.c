#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory set to zero
 * @nmemb: input number of elements
 * @size: input the size of the memory
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	char *pointeur;

	if (nmemb == 0 || size == 0)
	return (NULL);

	pointeur = malloc(nmemb * size);

	if (pointeur == NULL)
	return (NULL);

	for (index = 0; index < nmemb * size; index++)
		pointeur[index] = 0;

	return (pointeur);
}
