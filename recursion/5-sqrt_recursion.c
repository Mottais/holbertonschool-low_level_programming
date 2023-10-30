#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * carre_de_i - cherche si i au carré egale n
 * @i: integer incrémenté
 * @n: le carré recherché
 *
 * Return: i si trouvé sinon -1
 */
int carre_de_i(int i, int n)
{
	if (i * i == n)
	return (i);

	if (i * i > n)
	return (-1);

	return (carre_de_i(i + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input integer
 *
 * Return: returns the natural square root of n
 */
int _sqrt_recursion(int n)
{
		return (carre_de_i(0, n));
}
