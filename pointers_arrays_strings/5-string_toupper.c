#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @a: input string
 *
 * Return: string to uppercase
 */

char *string_toupper(char *a)
{
	int i, len = strlen(a);

	for (i = 0; i < len; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		a[i] = a[i] - 'a' + 'A';
	}
	return (a);
}
