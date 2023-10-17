#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: input number
 *
 * Return: last digit of a number.
 */
int print_last_digit(int n)
{
	int L_D;

	if (n == (-2147483648))
	n = n + 10;

	if (n <= 0)
	n = n * (-1);

	L_D = n % 10;
	_putchar(L_D + '0');
	return (L_D);
}

