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
	int i = 0, len = strlen(s);
	int debut, fin;
	int signe = -1;
	int n, nb;

	len = strlen(s);

	/* cherche position 1er caractere numérique --> 'debut'              */
	while (!(*(s + i) >= '0' && *(s + i) <= '9') && i != len)
	{
		car = *(s + i);
		/* nombre négatif si le nbr de '-' qui le précède est impair */
		if (car == '-')
		signe = signe * (-1);
		i++;
	}
	debut = i;

	/*cherche position dernier caractere num consécutif --> 'fin'        */
	while ((*(s + i) >= '0' && *(s + i) <= '9'))
	i++;
	fin = i - 1;

	/* calcul nombre à partir des valeurs entre 'debut' et 'fin'         */
	/* gestion du nombre en négatif pour triater probleme du integer max */
	n = 1;
	nb = 0;
	for (i = fin; i >= debut; i--)
	{
		car = *(s + i);
		nb = nb - (car - '0') * n;
		/* gestion de n pour probleme du integer max                 */
		if (n != 1000000000)
		n = n * 10;
	}
	return (nb * signe);
}

