#include "main.h"
/**
 * swap_int - swap a - b
 *
 * @a: input address integer a
 * @b: input address integer b
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
