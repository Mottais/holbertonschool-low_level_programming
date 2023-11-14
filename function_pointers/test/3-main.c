#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - performs simple operations.
 * @argc: number of argument
 * @argv: list of argument
 *
 * Return: 0 Success
*/
int main(int argc, char *argv[])
{

	int (*pointeur_fonction)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	pointeur_fonction = get_op_func(argv[2]);


	if (!pointeur_fonction)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", pointeur_fonction(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
