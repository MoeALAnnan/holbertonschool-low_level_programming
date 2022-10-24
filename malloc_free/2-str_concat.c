#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stddef.h>
/**
 * str_concat - a function
 * @s1: parameter string 1
 * @s2: parameter string 2
 * Description: a function that duplicate strings
 * Return: pointer on success
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int x = 0;
	int j;

	ptr = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	j = strlen(s1);
	for (x = 0; s2[x] != '\0'; x++)
	{
		ptr[j + x] = s2[x];
	}
	return (ptr);
}
