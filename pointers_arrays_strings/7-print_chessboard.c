#include "main.h"
#include <string.h>

/**
 * print_chessboard - prints the chessboard.
 * @a: array 8 x 8
 *
 */

void print_chessboard(char (*a)[8])
{
	int c, l;

	for (l = 0; l < 8 ; l++)
	{
		for (c = 0 ; c < 8 ; c++)
		_putchar(a[l][c]);

		_putchar(10);
	}
}
