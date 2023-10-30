#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  _strlen_recursion - returns the length of a string.
 * @s: input string
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s != 0)
	return( _strlen_recursion (s + 1) + 1);
	else
	return(0);
}
