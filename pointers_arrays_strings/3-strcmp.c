#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: parameter
 * @s2: parameter
 * Description: a functiion that compares strings
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y = 0;

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	if (x > y)
		return (15);

	else if (x < y)
		return (-15);

	else
		return (0);
}
