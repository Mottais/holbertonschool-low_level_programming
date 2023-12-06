#include "hash_tables.h"
/**
 * hash_table_set - add to the hash table
 *
 * @ht: hash table to add
 * @key: is the key
 * @value: is the value of key
 * Return: 1 if success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;
	hash_node_t *new_node;

	if (!ht)
		return (0);

	if (value == NULL)
		value = "";

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (!strcmp(temp->key, key))
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup((char *)key);

	new_node->value = strdup((char *)value);

	new_node->next = ht->array[index];

	ht->array[index] = new_node;

	return (1);
}
