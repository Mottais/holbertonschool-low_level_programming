#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: input string1
 * @s2: input string2
 * @n : input intiguer = nb caractere of s2 to after after s1
 *
 * Return: pointer to a new string which is a concatenates of the string s1 s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1_ns2;
	unsigned int i, len_s1 = 0, len_s2 = 0, len_s1_ns2 = 0;

	if (s1 == 0)
	s1 = "";

	if (s2 == 0)
	s2 = "";

	while (s1[len_s1])
	len_s1++;

	while (s2[len_s2])
	len_s2++;

	if (n < len_s2)
		len_s2 = n - 1;

	len_s1_ns2 = len_s1 + len_s2 + 1;
	s1_ns2 = malloc(len_s1_ns2);

	if (s1_ns2 == NULL)
	return (NULL);

	for (i = 0; i < len_s1; i++)
	s1_ns2[i] = s1[i];

	for (i = len_s1; i < len_s1_ns2; i++)
	s1_ns2[i] = s2[i - len_s1];

	s1_ns2[len_s1_ns2] = 0;
	return (s1_ns2);
}
