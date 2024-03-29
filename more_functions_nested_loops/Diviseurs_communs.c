#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long nombre = 612852475143;
	int i;

	for (i = 2; i <= nombre; i++)
	{
		if ((nombre % i) == 0)
		{
			nombre = nombre / i;

			/* affiche tous les diviseurs premiers */
			printf("--> %d\n", i);
			i--;
		}
	}
	return (i);
}
