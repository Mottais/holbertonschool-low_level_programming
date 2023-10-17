#include "main.h"

/**
 * _isalpha - checks if c is alphabetic character.
 * @c: input character
 *
 * Return: 1 if c is lowercase 0 otherwise
*/

int _isalpha(int c)
{
	/* your code goes there */
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
