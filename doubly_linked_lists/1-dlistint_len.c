#include "lists.h"
/**
 * dlistint_len - returns the number of elements list
 * @h: points to the head of a list
 *
 * Return: the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
