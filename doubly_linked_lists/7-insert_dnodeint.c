#include "lists.h"
/**
 * insert_dnodeint_at_index - add a node at the index
 * @idx: the index
 * @h: the head of the list
 * @n: the data to add
 *
 * Return: the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *displaynode, *tmp;
	unsigned int i;

	displaynode = (struct dlistint_s *) malloc(sizeof(struct dlistint_s));

	if (h == NULL || displaynode == NULL)
		return (0);

	tmp = *h;

	if (idx == 0)
	{
		displaynode = add_dnodeint(h, n);
		return (displaynode);
	}

	displaynode->n = n;

	for (i = 0; i < idx - 1; i++)
	{
		if (tmp != NULL)
			tmp = tmp->next;
		else
			return (0);
	}

	displaynode->next = tmp->next;

	tmp->next = displaynode;

	displaynode->prev = tmp;

	if (displaynode->next != NULL)
		displaynode->next->prev = displaynode;

	return (displaynode);
}
