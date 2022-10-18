#include "main.h"
/**
 * _strlen - a function
 * @s: parameter
 * Description: a function that prints a line
 * Return: void
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
{
	s++;
	length++;
}
	return (length);
}


