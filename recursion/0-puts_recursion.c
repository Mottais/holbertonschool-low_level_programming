#include "main.h"

/**
 *  _puts_recursion - .string, followed by a new line.
 * @s: input string
 *
 * Return: 1 if uppercase else 0
 */

void _puts_recursion(char *s)
{
	if (s[0] == 0)
	{
		_putchar(10);
	}
	else
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
}
