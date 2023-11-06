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
	char *str;
	unsigned int i;

	if (size == 0)
		return(0);
	
	str = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		str[i] = c;

	if (str = 0)
		return(0);
	
	return(str);
}
