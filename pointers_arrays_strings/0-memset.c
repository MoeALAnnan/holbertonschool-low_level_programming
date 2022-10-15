#include <stdio.h>
/**
 * _memset - a function
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Description: a function that fills up the buffer
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
