#include "main.h"
/**
 * _strncat - a function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Description: a function that concatinates
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int x = 0;

	while (src[i] != '\0')
		i++;

	while (dest[j] != '\0')
		j++;
	if (n > i)
	{
	n = i;

	for (; x < n; x++)
		dest[j + x] = src[x];
	}
	else
	{
	for (; x < n; x++)
		dest[j + x] = src[x];
	}
	return (dest);
}
