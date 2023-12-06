#include "hash_tables.h"
/**
 * hash_table_delete - free the hash table
 * @ht: the pointer to the hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{

	unsigned long int size, i;
	hash_node_t *ptr, *next_noeud;

	if (ht == NULL)
		return;

	size = ht->size;
	for (i = 0; i < size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			next_noeud = ptr->next;
			if (ptr->key)
			{
				free(ptr->key);
				ptr->key = NULL;
			}
			if (ptr->value)
			{
				free(ptr->value);
				ptr->value = NULL;
			}
			free(ptr);
			ptr = NULL;
			ptr = next_noeud;
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
}
