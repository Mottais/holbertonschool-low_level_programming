#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
	int l, c;

	for (l = 0; l < 10; l++)
	{
		for (c = 0; c <= 14 ; c++)
		{
			if (c > 9)
			_putchar('1');

			_putchar((c % 10) + '0');
		}
	_putchar(10);
	}

}
