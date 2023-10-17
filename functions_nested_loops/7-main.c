#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	print_last_digit(-2147483648);
	_putchar('\n');
	print_last_digit(-2147483647);
	_putchar('\n');
	print_last_digit(2147483647);
	_putchar('\n');


	r = print_last_digit(-2147483648);
	_putchar('0' + r);
	_putchar('\n');

	r = print_last_digit(-2147483647);
	_putchar('0' + r);
	_putchar('\n');

	r = print_last_digit(2147483647);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
