#include "main.h"
/**
 * print_numbers - Entry point
 *
 * Description: a function that prints
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
