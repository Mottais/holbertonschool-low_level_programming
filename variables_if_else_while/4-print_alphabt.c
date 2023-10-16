#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	/* your code goes there */
	int i;

	for (i = 97; i <= 122 ; i++)
	{
		if ((i != 101) && (i != 113))
		{
		putchar (i);
		}
	}
	putchar (10);
	return (0);
}
