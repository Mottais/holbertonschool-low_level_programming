#include "hash_tables.h"
/**
 * hash_table_print - print the hash table
 * @ht: the pointer to the hash table
 *
 * Return: NOTHING
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t *ptr, *new_node;
	char *separateur = "";

	if (ht == NULL)
	return

	size = ht->size;

	printf("{");

	for (i = 0; i < size; i++)
	{
		ptr = ht->array[i];

		/* Gestion collision (plusieurs clés à cet index) */
		while (ptr != NULL)   /* boucle sur la liste de l'index */
		{
			printf("%s'%s': '%s'", separateur, ptr->key, ptr->value);
			separateur = ", ";
			ptr = ptr->next;
		}
	}
	printf("}");

}
