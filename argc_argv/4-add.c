#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argv: argument vector
 * @argc: argument counter
 * Return: integers
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	/*check if argv exist*/

	if (argc > 1)

	{
		for (i = 1; i < argc; i++)
		{
			/*check if integer or not*/
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))

				{
					printf("Error\n");
					return (1);
				}


			}

			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);


	}
	else
		printf("0\n");
	return (0);
}
