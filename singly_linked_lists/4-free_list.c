#include "lists.h"
/**
 * free_list - freed a list
 *
 * @head: head element of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
	temp = head;
	head = head->next;
	free(temp->str);
	free(temp);
	}
}
