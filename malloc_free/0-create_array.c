#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * create_array - a function
 * @size: parameter
 * @c: parameter
 * Description: a function that that creates an array of chars
 * Return: void
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		ptr[i] = c;

	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
