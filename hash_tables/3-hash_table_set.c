#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the pointer to the hash table
 * @key: key of element to add
 * @value: value of element to add
 *
 * Return: 1 (success) or 0 (failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size, index;
	hash_node_t *ptr, *new_node;

	if (ht == NULL || key == NULL)
		return (0);
	if (value == NULL)
		value = "";
	size = ht->size;
	index = key_index((unsigned char *)key, size);
	ptr = ht->array[index];

	/* Gestion collision (clé déjà présente pour cet index) */
	while (ptr != NULL)   /* boucle sur la liste de l'index */
	{
		if (strcmp(ptr->key, key) == 0) /* si clé existe déjà */
		{
			free(temp->value);
			ptr->value = strdup(value); /* mise à jour valeur */
			return (1);
		}
		ptr = ptr->next;
	}
	/* Création nouveau noeud */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}

	/* Ajout nouveau noeud au début de la liste */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
