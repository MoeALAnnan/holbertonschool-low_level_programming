#include "main.h"
/**
 * _strchr - a function
 * @s: parameter
 * @c: parameter
 * Description: a function that returns first occurance of a charachter
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	if (s == 0)
		return (0);
	while (*s)
	{
		if (*s == c)
		return (s);
		s++;
	}
	return (0);
}
