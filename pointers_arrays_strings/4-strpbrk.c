#include "main.h"
/**
 * _strpbrk - a function
 * @s: parameter
 * @accept: parameter
 * Description: a function searches a string-
 * for any of a set of bytes.
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		s++;
		for (j = 0; accept[j] != '\0'; j++)
		{


			if (s[i] == accept[j])
				return (s);

		}

	}
	return (0);
}
