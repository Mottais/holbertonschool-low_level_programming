#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares two strings..
 * @s1: input string
 * @s2: input string
 *
 * Return: différence ASCII du 1er caractere différent
 */

int _strcmp(char *s1, char *s2)
{
	int lens1 = strlen(s1);
	int lens2 = strlen(s2);
	int n, i;

	if (lens1 < lens2)
	n = lens1;
	else
	n = lens2;
	i = 0;
	while (s1[i] == s2[i] && i < n)
	i++;

	return (s1[i] - s2[i]);
}
