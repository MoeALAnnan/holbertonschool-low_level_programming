#include "main.h"
/**
 * swap_int - function
 * @a: pointer
 * @b: pointer
 * Description: a function that swaps values of 2 integers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;

}

