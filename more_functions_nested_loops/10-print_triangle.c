#include "main.h"

/**
 * print_triangle - print_triangle
 * @size: input number
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j >= (size - i))
			_putchar('#');
			else
			_putchar(' ');
		}
		_putchar(10);
	}
	if (size <= 0)
	_putchar(10);
}
