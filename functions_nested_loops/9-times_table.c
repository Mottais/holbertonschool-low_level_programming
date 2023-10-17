#include "main.h"

/**
 *  times_table - print table 0 to 9
 */
void times_table(void)
{
	/* your code goes there */
	int x, y, p, d, u;

	for (x = 0; x <= 9 ; x++)
	{
		for (y = 0; y <= 9 ; y++)
		{
			p = x * y;
			d = p / 10;
			u = p % 10;

			if ((x == 0) && (y != 0))
			{
				_putchar(' ');
				_putchar(' ');
			}

			if (p != 0)
			_putchar(' ');

			if (p != 0 && d == 0)
			_putchar(' ');

			if (d != 0)
			_putchar(d + '0');

			_putchar(u + '0');

			if (y != 9)
			_putchar(',');
		}
			_putchar ('\n');
	}
}
