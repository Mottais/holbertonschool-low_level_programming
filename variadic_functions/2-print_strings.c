#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print a string with separators
 * @separator: string to be printed between strings
 * @n: number of parameters to print.
 *
 * Return: Void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *s;
	unsigned int i;

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != n && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);

	printf("\n");

}
