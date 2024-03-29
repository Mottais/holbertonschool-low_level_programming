#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	unsigned int i, len_str = 0;

	if (str == 0)
	return (NULL);

	while (str[len_str])
	len_str++;

	t = malloc(len_str + 1);

	if (t == NULL)
	return (NULL);


	for (i = 0; i < len_str; i++)
	t[i] = str[i];

	return (t);
}
