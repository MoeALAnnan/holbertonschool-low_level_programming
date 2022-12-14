#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_int - print integers
 * @ap: variable list
 * Return: void
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_char - print char
 * @ap: variable list
 * Return: void
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_str - print strings
 * @ap: variable list
 * Return: void
 */
void print_str(va_list ap)
{

	char *next_arg;

	next_arg = va_arg(ap, char *);
	next_arg == NULL ? next_arg = "(nil)" : next_arg;
	printf("%s", next_arg);
}
/**
 * print_flt - print float
 * @ap: variable list
 * Return: void
 */
void print_flt(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_all - print float
 * @format: the format scope
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *sep = "";
	op_f ops[] = {

		{"i", print_int},
		{"c", print_char},
		{"s", print_str},
		{"f", print_flt},
		{"\0", NULL}
	};
	va_list ap;
	int i;
	int j;

	i = 0;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(ap, format);
	while (format[i] != '\0' && format)
	{
		j = 0;
		while (j < 5)

		{
			if (*ops[j].op == format[i])
			{
				printf("%s", sep);
				ops[j].f(ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);

}
