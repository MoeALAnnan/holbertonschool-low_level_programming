#include "main.h"
/**
 * _strncpy - a function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Description: a function that copy
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

		for (x = 0; x < n && src[x] != 0; x++)
		dest[x] = src[x];

		for ( ; x < n; x++)
	        dest[x] = '\0';
	return (dest);
}
