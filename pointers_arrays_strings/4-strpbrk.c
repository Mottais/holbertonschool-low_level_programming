#include "main.h"
#include <string.h>

/**
 * _strpbrk -   searches a string for any of a set of bytes.
 * @s: input string
 * @accept: liste des caracteres recherchés
 *
 * Return: 's' a partir du 1er caractere de 'accept' trouvé
 */

char *_strpbrk(char *s, char *accept)
{
	int compte;
	unsigned int i, j, len_s, len_accept;

	len_s = strlen(s);
	len_accept = strlen(accept);

	for (i = 0; i <= len_s; i++)
	{
		compte = 0;
		for (j = 0; j < len_accept; j++)
		compte = compte + (s[i] == accept[j]);

		if (compte == 1)
		break;

	}
	return (&s[i]);
}
