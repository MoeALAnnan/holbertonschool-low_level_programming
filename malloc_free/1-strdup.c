#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * _strdup - a function
 * @str: parameter
 * Description: a function that duplicate strings
 * Return: pointer on success
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;

	ptr = (char *)malloc(strlen(str) + 1);
	for (i = 0; str[i] != '\0';  i++)
		ptr[i] = str[i];

	if (str == NULL)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
