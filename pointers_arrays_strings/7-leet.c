#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * leet - encodes a string into 1337.
 * @a: input string
 *
 * Return: encoded string
 */

char *leet(char *a)
{
	int i, len = strlen(a);

	for (i = 0; i < len; i++)
	{
	a[i] = a[i] + (a[i] == 'A') * ('4' - 'A');
	a[i] = a[i] + (a[i] == 'a') * ('4' - 'a');
	a[i] = a[i] + (a[i] == 'E') * ('3' - 'E');
	a[i] = a[i] + (a[i] == 'e') * ('3' - 'e');
	a[i] = a[i] + (a[i] == 'O') * ('0' - 'O');
	a[i] = a[i] + (a[i] == 'o') * ('0' - 'o');
	a[i] = a[i] + (a[i] == 'T') * ('7' - 'T');
	a[i] = a[i] + (a[i] == 't') * ('7' - 't');
	a[i] = a[i] + (a[i] == 'L') * ('1' - 'L');
	a[i] = a[i] + (a[i] == 'l') * ('1' - 'l');
	}
	return (a);
}
