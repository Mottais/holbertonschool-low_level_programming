#include <stdio.h>
#include "main.h"

/**
 * print_number - print_numberd
 * @: input number
 */

void print_number(int n)
{
	int p = 1;


	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			n = n * (-1);
			_putchar('-');
		}

		while ((n / p) != 0)
		{
			p = p * 10;
		}

		while (p != 1)
		{
			_putchar('0' + (n / (p / 10)) - 10 * (n / p));
			p = p / 10;
		}
	}
	_putchar(10);
}
