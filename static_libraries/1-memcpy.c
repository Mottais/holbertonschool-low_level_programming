#include "main.h"

/**
 * _memcpy - fills memory with a constant byte.
 * @dest: tableau à modifier
 * @src: tableau à copier
 * @n: nb de valeur de src a écrire 'b' dans dest
 *
 * Return: x + y
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
