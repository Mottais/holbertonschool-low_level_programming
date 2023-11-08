#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers.
 * @min: input min of array return
 * @max: input max of array return
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int i;
	int *pointeur;

	if (min > max)
	return (NULL);

	pointeur = malloc(4 * (max - min + 1));

	if (pointeur == NULL)
	return (NULL);

	for (i = 0; i <= max - min; i++)
	pointeur[i] = min + i;

	return (pointeur);
}
