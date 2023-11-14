#include <stdlib.h>
/**
 * print_name - a function prints a name
 * @name: name to print
 * @f: pointer of function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
