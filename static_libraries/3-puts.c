#include "main.h"
/**
 * _puts - function
 * @s: pointer
 * Description: a function that prints
 * Return: void
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
