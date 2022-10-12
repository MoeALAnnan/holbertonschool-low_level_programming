#include <stdio.h>
#include "main.h"
/**
 * print_array - function
 * @n: parameter
 * @a: parameter
 * Description: a function that prints elements of an array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{ printf("%d", a[i]);


		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}




	putchar('\n');
}
