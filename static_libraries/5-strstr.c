#include <stdio.h>
/**
 * _strstr - a function
 * @haystack: parameter
 * @needle: parameter
 * Description: a function that locates a substring
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int l1, l2;
	int i, j;

	l1 = 0;

	while (haystack[l1] != '\0')
	{
		l1++;
	}

	l2 = 0;

	while (haystack[l2] != '\0')
	{
		l2++;
	}

	for (i = 0; i < l1; i++)
	{
		for (j = 0; j < l2; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			if (j == l2)
			{
				return (needle);
			}
		}

		needle++;
	}
	return (0);
}
