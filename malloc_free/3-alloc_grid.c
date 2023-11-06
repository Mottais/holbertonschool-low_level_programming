#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: width array
 * @height: height array
 *
 * Return: pointer to a new string which is a concatenates of the string s1 s2
 */

int **alloc_grid(int width, int height)
{
	int **ligne;
	int lg, col;

	if (width < 1 || height < 1)
	return (NULL);

	ligne = malloc(sizeof(int *) * height);

	if (ligne == NULL)
	return (NULL);

	for (lg = 0; lg < height; lg++)
	{
		ligne[lg] = malloc(sizeof(int) * width);
		for (col = 0; col < width; col++)
		ligne[lg][col] = 0;
	}

	return (ligne);
}
