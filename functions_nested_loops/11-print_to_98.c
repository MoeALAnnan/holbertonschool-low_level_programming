#include <stdio.h>
/**
 * print_to_98 - printer function
 * @n: parameter
 * Description: a function that always prints to 98
 * Return: void
 */
void print_to_98(int n)
{
	int i = n;

	if (n < 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
			i++;
		}
	}

	else if (n > 98)
	{
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
			i--;
		}
	}
	else
		printf("98");

	printf("\n");


}
