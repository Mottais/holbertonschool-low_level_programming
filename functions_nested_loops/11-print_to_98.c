#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: input integer
 *
*/

void print_to_98(int n)
{
	/* your code goes there */
	int i, inc;

	i = n;
	inc = 1;

	if (n > 98)
	inc = -1;

	while (i != 98)
	{
		printf("%d, ", i);
		i = i + inc;
	}
	printf("98\n");
}
