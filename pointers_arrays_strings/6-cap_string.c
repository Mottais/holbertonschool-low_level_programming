#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string.
 * @a: input string
 *
 * Return: string (words capitalized)
 */

char *cap_string(char *a)
{
	int i, len = strlen(a);

	for (i = 0; i < len; i++)
	{
		if (a[0] >= 'a' && a[0] <= 'z')
		a[0] = a[0] - 'a' + 'A';

		if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
		{
			if (a[i] == 9)
			a[i + 1] = a[i + 1] - 'a' + 'A';
			if (a[i] == ' ')
			a[i + 1] = a[i + 1] - 'a' + 'A';
			if (a[i] == 10)
			a[i + 1] = a[i + 1] - 'a' + 'A';
			if (a[i] == ',')
			a[i + 1] = a[i + 1] - 'a' + 'A';
			if (a[i] == ';')
			a[i + 1] = a[i + 1] - 'a' + 'A';
			if (a[i] == '.')
			a[i + 1] = a[i + 1] - 'a' + 'A';
			if (a[i] == '!')
			a[i + 1] = a[i + 1] - 'a' + 'A';
			if (a[i] == '?')
			a[i + 1] = a[i + 1] - 'a' + 'A';
			if (a[i] == '?')
			a[i + 1] = a[i + 1] - 'a' + 'A';
			if (a[i] == '?')
			a[i + 1] = a[i + 1] - 'a' + 'A';
			if (a[i] == '?')
			a[i + 1] = a[i + 1] - 'a' + 'A';
			if (a[i] == '?')
			a[i + 1] = a[i + 1] - 'a' + 'A';
			if (a[i] == '?')
			a[i + 1] = a[i + 1] - 'a' + 'A';
		}
	}
	return (a);
}
