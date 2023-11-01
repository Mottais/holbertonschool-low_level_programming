#include <stdio.h>

/**
 * main - prints name program
 * @argc: count arggument
 * @argv: array argument (unused)
 *
 * Return: allway 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
