#include <string.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: input integer
 *
 * Return: number
 */

int _atoi(char *s)
{
	char car;
	int i, len;
	int debut, fin;
	int signe = 1;
	int n, nb;

	len = strlen(s);

	i = 0;
	while (!(*(s + i) >= '0' && *(s + i) <= '9') && i != len)
	{
		car = *(s + i);
		if (car == '-')
		signe = signe * (-1);

		i++;
	}
	debut = i;


	i = debut;
	while ((*(s + i) >= '0' && *(s + i) <= '9'))
	i++;

	fin = i - 1;

	n = 1;
	nb = 0;
	for (i = fin; i >= debut; i--)
	{
		car = *(s + i);
		nb = nb + (car - '0') * n;
		if (n != 1000000000)
		n = n * 10;
	}

	return (nb * signe);
}

