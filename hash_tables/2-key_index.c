#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 *
 * @key: the key (chaine de caractères)
 * @size: taille du tablrau de hachage
 * Return: index ( 0 <= index < size)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* algorithme de hachage djb2 revoi une valeur >=0 et <= MAX LONG INT*/
	return (hash_djb2(key) % size);
}
