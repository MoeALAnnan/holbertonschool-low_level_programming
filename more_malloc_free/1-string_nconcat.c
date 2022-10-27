#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * string_nconcat - a function
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Description: a function that returns a pointer to a 2 dimensional array
 * Return: pointer to a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *ptr;

	if (s2 == NULL)
		s2 = "";

	if (s1 == NULL)
		s1 = "";

	if (n >= strlen(s2))
		n = strlen(s2);


	ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (ptr == NULL)
	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[j + (strlen(s1))] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}
