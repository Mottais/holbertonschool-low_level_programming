#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - addition of 2 integer
 * @a: first integer
 * @b: second integer
 * Return: a + b
 */
int op_add(int a, int b) { return (a + b); }


/**
 * op_sub - Substraction of 2 integer
 * @a: first integer
 * @b: second integer
 * Return: Substraction a - b
 */
int op_sub(int a, int b) { return (a - b); }


/**
  * op_mul - multiplication of 2 integer
  * @a: first integer
  * @b: second integer
  * Return: a x b
  */
int op_mul(int a, int b) { return (a * b); }


/**
 * op_div - division of 2 integer
 * @a: first integer
 * @b: second integer
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b != 0)
	return (a / b);

	printf("Error\n");
	exit(100);
}


/**
 * op_mod - modulo of 2 integer
 * @a: first integer
 * @b: second integer
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b != 0)
	return (a % b);

	printf("Error\n");
	exit(100);
}
