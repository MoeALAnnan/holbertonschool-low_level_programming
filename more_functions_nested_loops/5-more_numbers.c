#include "main.h"
/**
 * print_numbers - Entry point
 *
 * Description: a function that prints
 * Return: void
 */
void more_numbers(void)
{	int i;

	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 1; i < 15 ; i++)
		{
			if (!(i <= 9))

				_putchar((i / 10) + '0');

			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
