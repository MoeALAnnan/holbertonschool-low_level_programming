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
	int n = 0;

	while (n != '\0')
	{
		n++;
	}
	for (i = 0; i < n && s[i] != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
