#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: points to theheadt of a list
 * @index: number of the node to return
 *
 * Return: address of the nth node or NULL if not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count != index && head != NULL)
	{
		head = head->next;
		count++;
	}
	return (head);
}
