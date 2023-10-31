#include "main.h"
#include <string.h>

/**
 * _strchr -  locates a character in a string.
 * @s: input string
 * @c: caractere recherché
 *
 * Return: retourne pointeur sur s à partir du caractere c
 */

char *_strchr(char *s, char c)
{
	int i, len;

	len = strlen(s);
	i = 0;
	while (s[i] != c && i <= len)
	{
		i++;
	}

	return (&s[i]);
}
