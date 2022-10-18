#include "main.h"
/**
 * _print_rev_recursion - a function
 * @s: parameter
 * Description: a function that prints
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);

}
