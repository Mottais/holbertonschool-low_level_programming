#include <stdio.h>
#include "main.h"

/**
 * print_number - print_numberd
 * @: input number
 */

void print_number(int n)
{
	long p = 1;
	long ln = n;

	if (ln == 0)
	{
		_putchar('0');
	}
	else
	{
		if (ln < 0)
		{
			ln = ln * (-1);
			_putchar('-');
		}

		while ((ln / p) != 0)
		{
			p = p * 10;
		}

		while (p != 1)
		{
			_putchar('0' + (ln / (p / 10)) - 10 * (ln / p));
			p = p / 10;
		}
	}
}
