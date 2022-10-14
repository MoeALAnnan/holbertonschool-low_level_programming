#include "main.h"
/**
 * string_toupper - pointer to a string
 * @c: parameter of the string
 * Description: a function that acts as a capslock
 * Return: pointer
 */
char *string_toupper(char *c)
{
	int n = 0;
	int i;

	while (c[n] != '\0')
		n++;

	for (i = 0; i < n && c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}

	return (c);
}
