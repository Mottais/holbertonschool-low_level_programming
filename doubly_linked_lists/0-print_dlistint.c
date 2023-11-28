size_t print_dlistint(const dlistint_t *h)
#include "lists.h"
/**
 * print_dlistint - print a doubly linked list
 * @h: points to the head of a list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("[%d]\n", h->n);
		size++;
		h = h->next;
	}

	return (size);
}
