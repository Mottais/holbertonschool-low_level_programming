#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input string destibation
 * @src : input string source
 *
 * Return: string concatenates
 */

char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;
	int i, j;

	i = 0;

	while (*(dest + i) != '\0')
	{
	i++;
	}

	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest_start + i) = *(src + j);
		i++;
		j++;
	}

	return (dest_start);
}
