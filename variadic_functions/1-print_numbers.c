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
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, const unsigned int));
			if (separator != NULL)
			{
				if (i != n - 1)
					printf("%s", separator);
			}
				if (i == n - 1)
					printf("\n");
		}
	}
	else
		printf("\n");
	va_end(ap);
}

