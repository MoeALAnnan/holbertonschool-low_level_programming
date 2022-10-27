#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _calloc - a function
 * @nmemb: parameter
 * @size: parameter
 * Description: a function that returns a pointer to a 2 dimensional array
 * Return: pointer to a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x;
	unsigned int i;

	x = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(x);
	if (ptr == NULL)

	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = '\0';
	return (ptr);

}

