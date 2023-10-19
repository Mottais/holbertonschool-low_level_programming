#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: input number
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	_putchar(10);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar(10);
	}


}
