#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string
 * @dest: string destination
 * @src: string source
 *
 * Return: sting destination
 */

char *_strcpy(char *dest, char *src)
{
	int len;

	len = 0;

	while (*(src + len) != 0)
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
