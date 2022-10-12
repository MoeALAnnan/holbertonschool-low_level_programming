#include "main.h"
/**
 * print_rev - Entry point
 * @s: parameter
 * Description: a function that reverse
 * Return: void
 */
void print_rev(char *s)

{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
