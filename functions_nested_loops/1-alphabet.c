#include "main.h"

/**
 *  print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	/* your code goes there */
	int i;

	for (i = 97; i <= 122 ; i++)
	{
		_putchar (i);
	}
	_putchar (10);
}
