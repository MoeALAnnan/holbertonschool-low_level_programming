#include <stdio.h>
/**
 * _memcpy - a function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Description: a function that copy n bytes from memory area
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
