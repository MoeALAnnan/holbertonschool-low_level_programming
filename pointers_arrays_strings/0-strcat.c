#include "main.h"
/**
 * _strcat - function
 * @dest: parameter
 * @src: parameter
 * Description: a function that prints a line
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int n = 0;

	while (src[i] != '\0')
		i++;

	while (dest[j] != '\0')
		j++;



	for (n = 0; src[n] != '\0'; n++)
	{
		dest[j + n] = src[n];

	}
	return (dest);
	}
