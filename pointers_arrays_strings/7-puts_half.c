#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 *
 */

void puts_half(char *str)
{
	int len;
	int i;

	len = 0;

	while (*(str + len) != 0)
	{
		len++;
	}

	for (i = len / 2; i < (len + 1) ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar(10);
}
