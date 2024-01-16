/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: Tableau dans lequel chercher
 * @size: taille du tableau
 * @value: valeur cherchée
 *
 * Return: index de la valeur cherchée, -1 si échec
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; array[i] != value && i < size ; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}

	printf("Value checked array[%lu] = [%d]\n", i, array[i]);


	if (i == size)
		return (-1);

	return (i);
}
