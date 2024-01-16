#include "search_algos.h"
/**
 * binary_search - search in an array using binary algorithm
 * @array: Tableau dans lequel chercher
 * @size: taille du tableau
 * @value: valeur cherchée
 *
 * Return: index de la valeur cherchée, -1 si échec
 */
int binary_search(int *array, size_t size, int value)
{
	int m, deb = 0, fin = size - 1;

	if (array == NULL || size < 1)
		return (-1);

	while (deb <= fin)
	{
		printf("Searching in array: %d", array[m = deb]);
		for (m++; m <= fin; m++)
			printf(", %d", array[m]);
		printf("\n");

		/*m = milieur de deb et fin */
		m = deb + (fin - deb) / 2;

		if (array[m] == value)
			return (m);

		if (array[m] > value)
			fin = m - 1;
		else
			deb = m + 1;
	}
	return (-1);
}
