#include "main.h"
/**
 * print_binary - print number in binary
 *
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = n, masque = 1;
	int i = 0;

	do {
		n = n >> 1;
		i++;
	} while (n > 0);


	for (i--; i != 0; i--)
		masque = masque << 1;


	while (masque > 0)
	{
		putchar('0' + ((m & masque) > 0));
		masque = masque >> 1;
	}
}
