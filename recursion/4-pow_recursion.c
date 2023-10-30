#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: input integer
 * @y: input integer
 *
 * Return: returns the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (_pow_recursion(x, y - 1) * x);
}
