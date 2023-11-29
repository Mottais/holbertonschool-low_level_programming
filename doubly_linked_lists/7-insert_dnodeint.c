#include "lists.h"
/**
 * insert_dnodeint_at_index - add a node at the index
 * @idx: the index
 * @h: the head of the list
 * @n: the number to add
 *
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
	return (0);

	/* si premier noeud */
	if (idx == 0)
	return (add_dnodeint(h, n));

	/* Compte le nombre de noeud */
	i = 1;
	current = *h;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	i--;

	/* Si dernier noeud */
	if (i == idx)
	return (add_dnodeint_end(h, n));

	/* Si idx trop grand */
	if (i < idx)
	return (0);

	/* Sinon */
	current = *h;
	for (i = 0; i < idx - 1; i++) /* pointe sur le noued qui précède */
	current = current->next;
	new_node = malloc(sizeof(struct dlistint_s));
	if (new_node == NULL)
	return (0);
	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}
