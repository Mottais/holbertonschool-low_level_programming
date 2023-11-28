#include "lists.h"
/**
 * sum_dlistint - sum of the n of all elements of a list
 *
 * @head: head elements of list
 * Return: sum of the n of all elements of a list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
