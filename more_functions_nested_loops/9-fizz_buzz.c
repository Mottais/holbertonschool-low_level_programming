#include <stdio.h>

/**
 * main - FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

		for (i = 1; i <= 100 ; i++)
		{

			if (!(i % 3) && (i % 5))
			printf("Fizz ");

			if (!(i % 5) && (i % 3))
			printf("Buzz ");

			if (!(i % 3) && !(i % 5))
			printf("FizzBuzz ");

			if ((i % 3) && (i % 5))
			printf("%d ", i);
		}

	printf("\n");
	return (0);
}
