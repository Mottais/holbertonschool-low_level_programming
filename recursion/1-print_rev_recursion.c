#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  _print_rev_recursion - .prints a string in reverse.
 * @s: input string
 *
 * Return: 1 if uppercase else 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == 0)
	return;

	_print_rev_recursion(s + 1);
	_putchar (*s);
}
