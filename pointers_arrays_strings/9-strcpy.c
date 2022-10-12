#include "main.h"
/**
 * _strcpy - Entry point
 * @dest: parameter
 * @src: parameter
 * Description: a function that copies strings
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int i = 0;

	while (*(src+ n) != '\0')
		n++;

	while (i < n)
	{
		dest[i] = src[i];
		i++;

	}
	return (dest);
}
