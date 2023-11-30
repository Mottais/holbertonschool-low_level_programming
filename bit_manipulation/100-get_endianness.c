#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int test = 1;
	/*pointeur pour accéder aux octets d'un entier */
	char *pTest = (char *)&test;

/* Si 1er octet (à l'adresse la plus basse) = 1 alors little-endian */
	return (*pTest == 1);
}
/*
 *"Little-endian":Dans un système little-endian, le byte le moins significatif
 *(le plus faible) est stocké à la 1ere adresse mémoire (à l'adresse la
 *plus basse), suivi des bytes plus significatifs à des adresses mémoire plus
 *élevées. C'est-à-dire que l'ordre de stockage est du "petit bout" (little
 *end) vers le "grand bout" (big end).

 *"Big-endian" : À l'inverse, dans un système big-endian, le byte le plus
 *significatif (le plus fort) est stocké à la 1ière adresse mémoire, suivi
 *des bytes moins significatifs à des adresses mémoire plus élevées.
 *L'ordre de stockage est donc du "grand bout" vers le "petit bout".
*/
