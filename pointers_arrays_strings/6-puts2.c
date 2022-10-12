#include "main.h"
/**
 * puts2 - Entry point
 * @s: parameter
 * Description: a function that prints every other charachter
 * Return: void
 */
void puts2(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i = i + 2;
	}
	_putchar('\n');
}
