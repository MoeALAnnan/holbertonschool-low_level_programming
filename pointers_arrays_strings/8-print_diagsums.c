#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - a function
 * @a: parameter
 * @size: parameter
 * Description: a function that adds diagonals of square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum;
	int sum2 = 0;
	int j = size - 1;

	sum = 0;
	sum2 = 0;

	for (i = 0; i < (size * size);)
	{
		sum = sum + a[i];
		i = i + (size + 1);
	}
	puts("%d, ", sum);

	for (; j <= (size * size) - size ;)
	{

		sum2 = sum2 + a[j];
		j = j + (size - 1);
	}
	puts("%d ", sum2);

}

