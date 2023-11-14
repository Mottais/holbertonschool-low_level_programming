#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - execute function on each elementt of an array
 * @array: input aurray
 * @size: input size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	action(array[i]);

}
