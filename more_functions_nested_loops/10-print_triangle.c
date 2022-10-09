#include "main.h"
/**
 * print_triangle - pattern function
 * @size: parameter
 * Description: a function that prints a triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{

	int j = 0;

	while (j < size)
	{
		int i = 1;

		while (i <= size)
		{
			if (i < size - j)

				_putchar(' ');
			else
				_putchar('0' - 13);
			i++;
		}
		_putchar('\n');
		j++;
	}
	}
	else
	_putchar ('\n');
}
