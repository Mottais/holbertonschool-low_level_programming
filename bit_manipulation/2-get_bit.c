#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the value to get a bit
 * @index: index of the bit
 *
 * Return: returns the value of a bit at a given index, return -1 if failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int masque = 1;

	if (index >= sizeof(long int) * 8)
		return (-1);

	masque = masque << index;

	return ((n & masque) > 0);
}
