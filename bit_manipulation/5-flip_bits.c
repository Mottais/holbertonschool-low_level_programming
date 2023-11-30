#include "main.h"
/**
 * flip_bits - returns number of bits to flip to get from a number to another
 * @n: first numbre
 * @m: 2nd number
 *
 * Return: returns the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	n = n ^ m;

	do {
		count = count + (n & 1);
		n = n >> 1;
	} while (n > 0);

	return (count);
}
