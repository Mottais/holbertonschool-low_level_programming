#include "main.h"
/**
 * print_binary - print number in binary
 *
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);
	_putchar('0' + (n % 2));
}
