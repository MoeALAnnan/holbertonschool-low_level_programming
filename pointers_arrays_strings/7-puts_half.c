#include "main.h"
/**
 * puts_half - function
 * @s: parameter
 * Description: a function that prints half a string
 * Return: void
 */
void puts_half(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	if (i % 2 == 0)
	{
		int n = (i / 2);

		while (s[n] != '\0')
		{
			_putchar(s[n]);
			n++;
		}
	}
	else
	{
		int n = (((i - 1) / 2) + 1);

		while (s[n] != '\0')
		{
			_putchar(s[n]);
			n++;

		}
	}
	_putchar('\n');
}
