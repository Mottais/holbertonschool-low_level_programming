#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	/* your code goes there */
	int i, j;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 97; j <= 122 ; j++)
		{
			_putchar (j);
		}
		_putchar (10);
	}
}
