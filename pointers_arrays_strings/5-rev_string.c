#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string
 *
 */

void rev_string(char *s)
{
	int len;
	int i;
	char temp;

	len = 0;
	while (*(s + len) != 0)
	{
		len++;
	}

	for (i = 0; i <= ((len / 2) + 1); i++)
	{
		temp = *(s + (len - i - 1));
		*(s + (len - i - 1)) = *(s + i);
		*(s + i) = temp;
	}
}
