#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * Print_Char - print a char
 * @arg_varia: list of argument to print
 */
void Print_Char(va_list arg_varia)
{
	printf("%c", va_arg(arg_varia, int));
}

/**
 * Print_Int - print a int
 * @arg_varia: list of argument to print
 */
void Print_Int(va_list arg_varia)
{
	printf("%d", va_arg(arg_varia, int));
}

/**
 * Print_Float - print a float
 * @arg_varia: list of argument to print
 */
void Print_Float(va_list arg_varia)
{
	printf("%f", va_arg(arg_varia, double));
}

/**
 * Print_String - print a string
 * @arg_varia: list of argument to print
 */
void Print_String(va_list arg_varia)
{
	char *s;

	s = va_arg(arg_varia, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints all argument (anything format)
 * @format: type of format
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list arg_varia;
	unsigned int i, j;
	char *separateur;

	TypeDef_CodeFormat_Fonction CodeFormat_Fonction[] = {
		{"c", Print_Char},
		{"i", Print_Int},
		{"f", Print_Float},
		{"s", Print_String},
		{NULL, NULL}
	};

	va_start(arg_varia, format);

	/* boucle sur toutes les valeurs de l'argument format' si non NULL */
	i = 0;
	separateur = "";
	while (format != NULL && format[i] != '\0')
	{

		/* boucle sur toutes les valeurs des codes du tableau CodeFormat_Fonction */
		j = 0;
		while (CodeFormat_Fonction[j].Code_Format)
		{
			if (format[i] == *CodeFormat_Fonction[j].Code_Format)
			{
			printf("%s", separateur);
			CodeFormat_Fonction[j].Pointeur_Fonction_Print(arg_varia);
			separateur = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(arg_varia);
}
