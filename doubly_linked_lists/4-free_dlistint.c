#include "lists.h"
/**
 * free_dlistint - freed a list
 *
 * @head: head element of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
	temp = head;
	head = head->next;
	free(temp);
	}
}
