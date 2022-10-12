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

	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;

	}
	return (dest);
}
