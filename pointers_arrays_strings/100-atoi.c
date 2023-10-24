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
	long int n, lnb;

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
	lnb = 0;
	for (i = fin; i >= debut; i--)
	{
		car = *(s + i);
		lnb = lnb + (car - '0') * n;
		n = n * 10;
	}

	return (lnb * signe);
}

