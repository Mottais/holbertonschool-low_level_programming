#include "main.h"

/**
 * _strlen - return strength of string
 * @s: string
 * Return: int strength of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
