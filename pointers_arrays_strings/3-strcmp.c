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

	while (s1[x] == s2[y] && s1[x] != '\0' && s2[y] != 0)
	{
		x++;
		y++;
	}
	return (s1[x] - s2[y]);
}
