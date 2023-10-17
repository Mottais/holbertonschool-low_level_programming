#include "main.h"

/**
 * _islower - prints ten times the alphabet, in lowercase.
 * @c: input character
 *
 * Return: 1 if c is lowercase 0 otherwise
*/

int _islower(int c)
{
	/* your code goes there */
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
