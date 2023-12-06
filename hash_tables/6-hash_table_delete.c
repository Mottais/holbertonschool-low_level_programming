#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 *
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		while (ht->array[i])
		{
			temp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			if (temp->key)
				free(temp->key);
			if (temp->value)
				free(temp->value);
			free(temp);
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
