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

	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
