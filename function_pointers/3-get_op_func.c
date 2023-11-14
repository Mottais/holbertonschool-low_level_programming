#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - select the correct function
 * @s: operator
 * Return: pointer to function
 */
int (*get_op_func(char *s))()
{
	int i;

	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		return (ops[i].f);

		i++;
	}

	return (NULL);
}
