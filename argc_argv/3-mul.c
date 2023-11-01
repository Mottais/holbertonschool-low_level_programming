#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name program
 * @argc: count arggument (unused)
 * @argv: array argument
 *
 * Return: allway 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i <= 2; i++)
		mul *= atoi(argv[i]);

	printf("%d\n", mul);

	return (0);
}
