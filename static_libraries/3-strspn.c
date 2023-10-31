#include "main.h"
#include <string.h>

/**
 * _strspn -  locates a character in a string.
 * @s: input string
 * @accept: caracteres de préfixes recherché
 *
 * Return: longueur du prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	int compte;
	unsigned int i, j, len_s, len_accept;

	len_s = strlen(s);
	len_accept = strlen(accept);

	for (i = 0; i < len_s; i++)
	{
		compte = 0;
		for (j = 0; j < len_accept; j++)
		compte = compte + (s[i] == accept[j]);

		if (compte == 0)
		break;

	}
	return (i);
}
