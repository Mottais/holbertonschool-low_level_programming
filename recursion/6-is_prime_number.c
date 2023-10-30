#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * est_premier - cherche si n est premier
 * @i: integer incrémenté
 * @n: interger tested
 *
 * Return: 1 si premier sinon 0
 */
int est_premier(int i, int n)
{
	if (i == n)
	return (1);
	if ((n % i) == 0)
	return (0);
	else
	return (est_premier(i + 1, n));
}
/**
 * is_prime_number - check if n is prime number
 * @n: input integer
 *
 * Return: 1 si premier sinon 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	return (0);
	return (est_premier(2, n));
}
