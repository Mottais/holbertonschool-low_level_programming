#include "lists.h"
/**
 * add_dnodeint - add a node at the beginning to a double list
 * @head: points to the start of a list
 * @n: number to put in the element
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head = malloc(sizeof(dlistint_t));

	if (head == NULL || new_head == NULL)
	return (0);

	new_head->n = n;
	new_head->prev = NULL;
	new_head->next = *head;

	if (*head != NULL)
	(*head)->prev = new_head;

	*head = new_head;

	return (new_head);
}
