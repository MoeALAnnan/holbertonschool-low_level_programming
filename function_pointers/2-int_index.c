#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function
 * @array: pointer to an array of integers
 * @size: size of the array
 * @cmp: pointer to a function that compare values
 *
 * Description: a function that searches for an integer
 * Return: return (0) on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((cmp(array[i])) != 0)
			return (i);
	}
	return (-1);
}

