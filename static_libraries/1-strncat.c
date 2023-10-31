#include "main.h"

/**
 * _strncat - concatenates two strings n caraters
 * @dest: input string destibation
 * @src : input string source
 * @n : nubre caraters
 *
 * Return: string concatenates
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;
	int i, j;

	i = 0;

	while (*(dest + i) != '\0')
	{
	i++;
	}

	j = 0;
	while ((*(src + j) != '\0') && j < n)
	{
		*(dest_start + i) = *(src + j);
		i++;
		j++;
	}

	return (dest_start);
}
