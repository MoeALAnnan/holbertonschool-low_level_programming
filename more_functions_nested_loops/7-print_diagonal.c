#include "main.h"
/**
 * print_diagonal - function
 * @n: parameter
 * Description: a function that prints a diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar (' ');
			}
			_putchar ('0' + 44);
			_putchar ('\n');
		}
	}
	else
	_putchar ('\n');
}
