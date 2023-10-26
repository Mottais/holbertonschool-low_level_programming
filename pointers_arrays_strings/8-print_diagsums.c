#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: square matrix of integers
 * @size: size of square
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
	d1 = d1 + a[i + size * i];
	d2 = d2 + a[size - i - 1 + size * i];
	}
	printf("%d, %d\n", d1, d2);
}
