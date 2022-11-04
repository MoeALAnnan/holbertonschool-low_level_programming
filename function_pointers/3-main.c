#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * main - check the code
 * @argv: parameter
 * @argc: parameter
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);


		if (((argv[2][0] == '/') || (argv[2][0] == '%')) && (argv[3][0] == '0'))
		{
			printf("Error\n");
			exit(100);
		}
		if ((argv[2][0] != '+') && (argv[2][0] != '-')
				&& (argv[2][0] != '*') && (argv[2][0] != '/')
				&& (argv[2][0] != '%'))
		{
			printf("Error\n");
			exit(99);
		}
		else
		{
			printf("%d\n", get_op_func(argv[2])(num1, num2));
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

