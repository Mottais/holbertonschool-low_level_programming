#include "lists.h"
/**
 * print_list - print a list hen she's not empty
 * @h: elements of list
 * Return: size of the list
*/
size_t print_list(const list_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");

		else
		printf("[%d] %s\n", h->len, h->str);

		size++;
		h = h->next;
	}

	return (size);
}
