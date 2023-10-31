#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring.
 * @haystack: input string
 * @needle: liste des caracteres recherchés
 *
 * Return: 's' a partir du de la chaine 'needle' trouvée
 */

char *_strstr(char *haystack, char *needle)
{

	unsigned int i, j, compte, len_haystack, len_needle;

	len_haystack = strlen(haystack);
	len_needle = strlen(needle);

	for (i = 0; i < len_haystack ; i++)
	{
	compte = 0;
	for (j = 0; j < len_needle; j++)
	compte = compte + (haystack[i + j] == needle[j]);

	if (compte == len_needle)
	break;
	}

	if (i == len_haystack)
	return (NULL);
	else
	return (&haystack[i]);
}
