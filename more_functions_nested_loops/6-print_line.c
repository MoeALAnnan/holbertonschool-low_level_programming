#include "main.h"
/**
 * print_line - Entry point
 * @n: parameter
 * Description: a function that prints a line
 * Return: void
 */
void print_line(int n)
{ int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
		_putchar ('0' + 47);
		}
		_putchar ('\n');
	}
		else
		_putchar ('\n');
}

