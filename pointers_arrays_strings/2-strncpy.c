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
	
		for (x = 0; x < n; x++)
		{dest[x] = src[x];}

	return (dest);
}
