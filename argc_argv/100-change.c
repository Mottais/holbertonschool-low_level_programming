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
	int cents, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	cents = atoi(argv[1]);
	if (cents < 0)
	cents = 0;

	count += cents / 25;
	cents %= 25;

	count += cents / 10;
	cents %= 10;

	count += cents / 5;
	cents %= 5;

	count += cents / 2;
	cents %= 2;

	count += cents / 1;
	cents %= 1;

	printf("%d\n", count);
	return (0);

}
