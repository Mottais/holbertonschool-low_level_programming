#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars, initializes it with a specific char
 *
 * @size: the size of the memory to print
 * @c: input char
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(size);
	if (size == 0)
		return (NULL);

	if (t == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		t[i] = c;

	return (t);
}
