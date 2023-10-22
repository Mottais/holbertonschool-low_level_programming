#include <stdio.h>
#include "main.h"

/**
 * print_number - print_numberd
 * @n: input number
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
			_putchar('-');
			if (n == -2147483648)
			{
				_putchar('2');
				n = n + 2000000000;
			}
			n = n * (-1);
		}

		while ((n / p) != 0 && p < 1000000000)
		{
			p = p * 10;
		}

		if (n / 1000000000 > 0)
		_putchar('0' + (n / 1000000000));

		while (p != 1)
		{
			_putchar('0' + (n / (p / 10)) - 10 * (n / p));
			p = p / 10;
		}
	}
}
