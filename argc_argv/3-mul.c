#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 * @argv: argument vector
 * @argc: argument counter
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result, var1, var2;

	if (argc == 3)

	{var1 = atoi(argv[1]);
	var2 = atoi(argv[2]);

	result = var1 * var2;
	printf("%d\n", result);
	return (0);
	}

	else if (argc == 2)
		printf("Error\n");

	return (1);
}
