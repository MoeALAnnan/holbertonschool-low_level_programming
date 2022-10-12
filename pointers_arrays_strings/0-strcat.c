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
	{

		i++;
	}
	i--;






	while (dest[j] != '\0')
		j++;



	while (n <= j + i)
	{
		dest[j + n] = src[n];

		n++;
	}
	return (dest);
	}
