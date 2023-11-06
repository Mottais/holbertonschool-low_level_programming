#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat -  function that concatenates two strings.
 * @s1: input string1
 * @s2: input string2
 *
 * Return: pointer to a new string which is a concatenates of the string s1 s2
 */

char *str_concat(char *s1, char *s2)
{
	char *t;
	unsigned int i, len_s1 = 0, len_s2 = 0, len_t = 0;

	if (s1 == 0)
	s1 = "";

	if (s2 == 0)
	s2 = "";

	while (s1[len_s1])
	len_s1++;

	while (s2[len_s2])
	len_s2++;

	len_t = len_s1 + len_s2 + 1;
	t = malloc(len_t);

	if (t == NULL)
	return (NULL);

	for (i = 0; i < len_s1; i++)
	t[i] = s1[i];

	for (i = len_s1; i < len_t; i++)
	t[i] = s2[i - len_s1];

	t[len_t] = 0;
	return (t);
}
