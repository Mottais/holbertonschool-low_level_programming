#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: input array
 * @b: caractere à ecrire
 * @n: nb de fois a écrire 'b'
 *
 * Return: x + y
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n ; i++)
	s[i] = b;

	return (s);
}
