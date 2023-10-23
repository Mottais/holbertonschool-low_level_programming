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

	for (i = (len + (len % 2)) / 2; i < len ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar(10);
}
