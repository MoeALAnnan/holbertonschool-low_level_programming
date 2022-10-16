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
	int i;

	if (*s == '\0')
		return (0);
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
