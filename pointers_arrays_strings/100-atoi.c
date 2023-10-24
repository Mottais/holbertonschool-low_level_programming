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
	int nb;
	char car;
	int i;
	int debut;
	int fin;
	int signe = 1;
	int n;

	len = strlen(s);

	i = 0;
	while (!(*(s + i) >= '0' && *(s + i) <= '9') && i != len)
	i++;

	debut = i;
	car = *(s + (debut - 1));
	if (car == '-')
	signe = -1;

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
		n = n * 10;
	}

	nb = nb * signe;

	return (nb);

}

