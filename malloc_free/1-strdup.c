#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  copy of the string given as a parameter
 *
 * @str: input string
 *
 * Return: pointer to a new string which is a duplicate of the string str
 */

char *_strdup(char *str)
{
	char *t;
	unsigned int i, len_str;

	if (str == 0)
	return (NULL);

	len_str = strlen(str);

	if (len_str == 0)
	return (NULL);

	t = malloc(len_str);
	for (i = 0; i < len_str; i++)
		t[i] = str[i];

	return (t);
}
