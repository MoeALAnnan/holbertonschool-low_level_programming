#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function
 * @n: parameter
 * @separator: parameter
 * Description: print parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;


	va_start(ap, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{	s = va_arg(ap, char *);
			if (s != NULL)
			printf("%s", s);
			else
				printf("nil");
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
