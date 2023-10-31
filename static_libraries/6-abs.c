#include "main.h"

/**
 * _abs - prints the absolute value of an integer.
 * @n: input number
 *
 * Return: n if n positif, -n if n negatif
 */
int _abs(int n)
{
	/* your code goes there */
	if (n < 0)
	{
		return (n * (-1));
	}

	else
	{
		return (n);
	}
}

