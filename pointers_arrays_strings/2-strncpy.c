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
	int j = 0;
	int x = 0;

	for (i = 0; dest[i] != '\0'; i++)
	for (j = 0; src[j] != '\0'; j++)
	
	if (dest == 0)
	{
		return (dest);
	}
	else
	{
		for (x = 0; x < n; x++)
		{dest[x] = src[x];}
	}
		
	

	
	
	return (dest);
}
