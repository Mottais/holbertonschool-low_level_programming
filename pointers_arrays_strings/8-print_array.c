#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: input array
 * @n: input number
 *
 */

void print_array(int *a, int n)
{
	int i;
	if (n > 0)
	{
		printf("%d", *(a + 0));
		for (i = 1; i < n ; i++)
		{
			printf(", %d", *(a + i));
		}
	}
	printf("\n");
}
