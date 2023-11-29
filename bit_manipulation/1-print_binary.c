#include "main.h"
/**
 * print_binary - print number in binary
 *
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int tab[32], i = 0;

	do {
		tab[i] = (n & 1);
		n = n >> 1;
		i++;
	} while (n > 0);

	do {
		i--;
		putchar((tab[i]) + '0');
	} while (i > 0);
}
