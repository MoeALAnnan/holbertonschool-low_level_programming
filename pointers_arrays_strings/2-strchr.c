#include "main.h"
/**
 * _strchr - a function
 * @s: pointer
 * @c: parameter
 * Description: a function that returns first occurance of a charachter
 * Return:return s or  NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		else
			return ('\0')
	}

	return ('\0');
}