#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the value to set a bit
 * @index: index of the bit
 *
 * Return: returns 1 if sucess, return -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int masque = 1;

	if (index >= sizeof(long int) * 8)
		return (-1);

	masque = masque << index;

	*n = *n | masque;
	return (1);
}
