#include "main.h"
#include <stdio.h>
/**
 * _strlen -  returns the length of a string..
 * @s: input string
 *
 * Return: returns the length of a string
 */

int _strlen(char *s)
{
	int len;
	printf("%s\n", s);
	printf("%lu\n", sizeof(s));
	len = 0;
	while (*(s + len) != 0)
	{
		len++;
	}
	return (len);
}
