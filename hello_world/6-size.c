#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int long_intType;
	long long int long_long_intType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long_intType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long_long_intType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
