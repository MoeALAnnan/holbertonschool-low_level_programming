#include "main.h"
/**
 * print_last_digit - print last digit
 * Description : this program is a checker
 * @c: int
 * Return: 1 success
 */
int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
	{
		c = -1 * c;
	}
	_putchar('0' + c);
	return (c);
}
