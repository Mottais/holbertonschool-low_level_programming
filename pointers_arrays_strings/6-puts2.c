#include "main.h"

/**
 * puts2 - prints half caracters
 * @str: input string
 *
 */

void puts2(char *str)
{
	int len;
	int i;

	len = 0;

	while (*(str + len) != 0)
	{
		len++;
	}

	for (i = 0; i < len; i = i + 2)
	{
		_putchar(*(str + i));
	}
	_putchar(10);
}
