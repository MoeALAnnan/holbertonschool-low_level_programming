#include "search_algos.h"
/**
 * linear_search - function linear search
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 * Return: integer on success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int j = 0;

	if (array == NULL || size == 0)

		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (j);
		}
		j++;
	}
	return (-1);

}
