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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
