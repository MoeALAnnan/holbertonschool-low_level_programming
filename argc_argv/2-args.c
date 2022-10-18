#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argv: argument vector
 * @argc: argument counter
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
