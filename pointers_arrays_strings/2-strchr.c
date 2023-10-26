#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: input string
 * @c: caractere recherché
 *
 * Return: retourne pointeur sur s à partir du caractere c
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != 0)
	{
		i++;
	}
	return (&s[i]);
}
