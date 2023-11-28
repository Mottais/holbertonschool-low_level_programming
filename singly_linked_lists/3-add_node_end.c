#include "lists.h"
/**
 * add_node_end - add a node at the end of list
 *
 * @head: head of the list
 * @str: string to add at the new node
 * Return: a list_t value
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;

	new_node = malloc(sizeof(list_t));

	if (head == NULL || new_node == NULL || str == NULL)
	return (0);

	/* Le nouveau nœud est le dernier, donc next doit être NULL */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;


	/* Si la liste est vide, le nouveau nœud = la tête de la liste */
	if (*head == NULL)
		*head = new_node;
	else
	{
	/* Sinon, parcourir la liste jusqu'à la fin et ajouter le nouveau nœud */
		current_node = *head;
		while (current_node->next != NULL)
		current_node = current_node->next;

		current_node->next = new_node;
	}

	return (new_node);
}
