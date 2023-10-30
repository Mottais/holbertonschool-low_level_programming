#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  factorial - returns the factorial of a given number.
 * @n: input integer
 *
 * Return: length of a string
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0)
	return (1);
	else
	return (factorial(n - 1) * n);
}
