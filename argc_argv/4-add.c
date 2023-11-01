#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints name program
 * @argc: count arggument (unused)
 * @argv: array argument
 *
 * Return: allway 0
 */
int main(int argc, char *argv[])
{
	unsigned int i;
	int j, sum = 0;


	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (j = 1; j < argc; j++)
	{
		/* si 1er caractere pas chiffre ni signe - */
		if (!((argv[j][0] >= '0' && argv[j][0] <= '9') || argv[j][0] == '-'))
		{
			printf("Error\n");
			return (1);
		}

		/* si caractere(s) suivant(s) pas chiffre */
		for (i = 1; i < strlen(argv[j]); i++)
			if (argv[j][i] < '0' || argv[j][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
	}


	for (j = 1; j < argc; j++)
		sum = sum + atoi(argv[j]);
	printf("%d\n", sum);
	return (0);
}

