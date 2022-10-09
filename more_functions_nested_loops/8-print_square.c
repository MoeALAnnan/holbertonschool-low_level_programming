#include "main.h"
/**
 * print_square - a function
 * @size: parameter
 * Description: a function that prints a square
 * Return: void
 */
void print_square(int size)
{
	if  (size > 0)
	{
		int i = 0;

		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar('0' - 13);
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar ('\n');

}
