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
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
