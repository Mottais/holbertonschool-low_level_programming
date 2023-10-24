#include "main.h"
#include <stdio.h>

/**
 * _strncpy -  copies a string.
 * @dest: input string destibation
 * @src : input string source
 * @n : nubre caraters
 *
 * Return: string concatenates
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;
	int i, j;

	i = 0;

	while (*(src + i) != '\0')
	{
	i++;
	}
	j = 0;
	while (j < i && j < n)
	{
		*(dest_start + j) = *(src + j);
		j++;
	}

	while ((*(dest + j) != '\0') && j < n)
	{
		*(dest_start + j) = 0;
		j++;
	}

	return (dest_start);
}
