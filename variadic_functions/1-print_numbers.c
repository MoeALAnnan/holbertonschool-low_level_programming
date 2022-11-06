#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function
 * @n: parameter
 * @separator: parameter
 * Description: print parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		_putchar(va_arg(ap, const unsigned int));
		_putchar(separator[0]);
	}
	va_end(ap);
}
