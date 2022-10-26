#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * malloc_checked - a function
 * @b: parameter
 * Description: a function that allocates memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		ptr = NULL;
		exit(98);
	}

	return (ptr);
}
