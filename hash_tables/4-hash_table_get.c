#include "hash_tables.h"
/**
 * hash_table_get - etrieves a value associated with a key.
 * @ht: the pointer to the hash table
 * @key: key you are looking for
 *
 * Return: value of key (success) or NULL (failure)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size, index;
	hash_node_t *ptr, *new_node;

	if (ht == NULL)
	return (0);

	size = ht->size;
	index = key_index((unsigned char *)key, size);
	ptr = ht->array[index];

	/* Gestion collision (clé déjà présente pour cet index) */
	while (ptr != NULL)   /* boucle sur la liste de l'index */
	{
		if (strcmp(ptr->key, key) == 0) /* si clé existe  */
		{
			return (ptr->value);
		}
		ptr = ptr->next;
	}

	return (NULL);
}
