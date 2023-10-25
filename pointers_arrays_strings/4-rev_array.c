#include "main.h"
#include <stdio.h>
/**
 * reverse_array - everses the content of an array of integers
 * @a: input array
 * @n: input integer
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i <= ((n / 2) - (n % 2)); i++)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}

}
