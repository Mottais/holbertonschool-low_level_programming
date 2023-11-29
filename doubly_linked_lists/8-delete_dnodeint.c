#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at the index
 *
 * @head: head of the list
 * @index: index delete
 * Return: 1 if sucess or -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	while (current != NULL && i  < index)
	{
		current = current->next;
		i++;
	}


	if (i != index)
	return (-1);


	if (current->next != NULL)
	{
		current->next->prev = current->prev;
		current->prev->next = current->next;
	}

	if (index == 0 && current != NULL)
		*head = current->next;

	free(current);
	return (1);

}
